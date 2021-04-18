#include <iostream>

using namespace std;

int main()
{

    int n,m,k;
    cin>>n>>m>>k;

    int as[n];
    for(int i=0; i<n; i++)
        cin>>as[i];


    int operations[m][3];

    for(int i=0; i<m; i++)
       {
           cin>>operations[i][0]>>operations[i][1]>>operations[i][2];

       }

    int queries[k][2];

    for(int i=0; i<k; i++)
    {
        cin>>queries[i][0]>>queries[i][1];
    }


    int helper_operations[m];
    long long helper_values[n+1];
    for(int i=0; i<m; i++)
        helper_operations[i] =0;

    for(int i=0; i<=n; i++)
        helper_values[i] =0;

    int a,b;

    for(int i=0; i<k; i++)
    {
        a = queries[i][0];
        b = queries[i][1];
        helper_operations[a-1] ++;
        if(b<m)
        {


        helper_operations[b]--;
        }
    }


    long long bonuses[n];
    bonuses[0] = helper_operations[0];
    for(int i=1; i<n; i++)
        bonuses[i]=helper_operations[i] + bonuses[i-1];



    for(int i=0; i<m; i++)
    {
        a = operations[i][0];
        b = operations[i][1];
        int d = operations[i][2];
        helper_values[a-1] += bonuses[i] * d;
        helper_values[b] -=bonuses[i]*d;


    }


    long long bonusik =0;
    for(int i=0; i<n; i++)
    {
        bonusik += helper_values[i];
        as[i] +=bonusik;

    }

    for(int i=0; i<n; i++)
        cout<<as[i]<<" ";

}
