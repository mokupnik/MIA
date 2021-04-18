#include <iostream>

using namespace std;

long long n_choose_2(long long n)
{
    return n-1 + ((n-2) * (n-1))/2;


}
int main()
{
    int n;
    int d;


    cin>>n;
    cin>>d;
    long long x[n];

    long long count_ =0;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }

    if(n <3)
    {
        cout<<0;
        return 0;
    }

int i=0;
int j=0;
int number_ =0;

    while(i<n)
    {
       while(x[j+1]-x[i] <= d && j<n-1)
       {
           j++;
           if(j-i==2)
           {
               count_++;
           }

           if(j-i > 2)
           {
               count_+= n_choose_2(j-i);



           }


       }
      i++;

    }
    cout<<count_;
    return 0;
}
