#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int b;
    int j;
    unordered_map<int, int> power_x;
    unordered_map<int, int> power_y;
    for(int i=0; i<n*(n-1)); i++)
    {
        for(int j=0; j<i; j++)
            {
                cin>>b;
                power_x[b] = i;
                power_y[b] = j;


            }

    }

    int teammates[2*n];
    int helper[n*n];
    for(int i=0; i<2*n*n; i++)
        helper[i] = -1000;

    int i=0;
    for(auto& it: power_x)
    {
        int x = it.first;
        helper[i] = x;
        i++;

    }



    sort(helper, helper+2*n*n, greater<int>());

    for(int i=0; i<2*n*n; i++)
        teammates[i] = -1;


     for(int i=0; i<2*n*n; i++)
     {
         int a = helper[i];
         if(a!= -1000)
         {
             int x = power_x[a];
             int y = power_y[a];

             if(teammates[x] == -1 && teammates[y] == -1)
             {

                 teammates[x] = y;
                 teammates[y] = x;

             }


         }


     }

     for(int i=0; i<2*n; i++)
     {

     if(teammates[i] >=0 )
     {
        cout<<teammates[i]+1<<" ";

     }

     }
}
