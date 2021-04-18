#include <iostream>
#include <unordered_map>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin>>n;
    cin>>q;
    long long as[n];
    long long queries[q][2];
    for(int i=0; i<n; i++)
        cin>>as[i];

    for(int i=0; i<q; i++)
    {
        cin>>queries[i][0];
        cin>>queries[i][1];


    }




    int a;
    int b;
    long long helper[n];

    for(int i=0; i<n; i++)
        helper[i] = 0;

    for(int i=0; i<q; i++)
    {

        a = queries[i][0];
        b = queries[i][1];
        helper[a-1] ++;
        if(b<n)
        {


        helper[b]--;
        }
    }


long long sums[n];
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            sums[i] = helper[i];
        }

        else{

            sums[i] = sums[i-1] + helper[i];
        }
    }

    sort(sums, sums+n, greater<long long>());
    sort(as, as+n, greater<long long>());


    long long sumka =0;
    for(int i=0; i<n; i++)
    {
        sumka+= as[i]*sums[i];
    }

cout<<sumka;
    return 0;
}
