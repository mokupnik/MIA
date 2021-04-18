#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

long double n_choose_k(long long n, long long k)
{

    long double cummulative = 1;

    if(k*2 >n) return n_choose_k(n, n-k);

    if(k==0)
    {
        return 1;
    }

    for(int i=1; i<=k; i++)
 {

     cummulative *= (n+1-i);
    cummulative /= i;

}
    return cummulative;
}

int main()
{
    int n;
    cin>>n;
    int b;
    unordered_map<long, pair<int,int>> power;


    int nk = n_choose_k(2*n, 2);
    long long helper[nk];

    int k=1;
    int i=1;
    int j=2;
    int iter =0;
    while(iter< nk)
    {

    cin>>b;

    power[b] = make_pair(i,j);
    helper[iter] = b;
    iter++;
    i++;
    if(i==j)
    {
    j++;
    i=1;



    }

    }





    sort(helper, helper + nk, greater<long>());



    int teammates[2*n];
    for(int i=0; i<2*n; i++)
        teammates[i] = -1;

    int p=0;
    int x =0;
    int y=0;

//    for(auto& it: power)
  //  {
    //    cout<<power[it.first].first<<" y "<<power[it.first].second<<" "<<it.first<<endl;
//}

   for(int i=0; i<nk; i++)
   {
       p = helper[i];
       x = power[p].first;
       y = power[p].second;

       if(teammates[x-1] == -1 && teammates[y-1] == -1)
       {
           teammates[x-1] = y;
           teammates[y-1] = x;

       }


   }


   for(int i=0; i<2*n; i++)
   {
       cout<<teammates[i]<<" ";

   }

    return 0;
}
