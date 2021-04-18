#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n,m,k;
    unordered_map<long long, long long> changes;
    unordered_map<long long, long long> combined_operations;
    cin>>n>>m>>k;
    long long tab[n];
    for(int i=0; i<n; i++)
       {
           cin>>tab[i];
        changes[tab[i]] = 0;
       }
    long long operations[m][3];
    for(int i=0; i<m; i++)
    {
        cin>>operations[i][0]>>operations[i][1]>>operations[i][2];

    }
    int queries[k][2];

    for(int i=0; i<k; i++)
    {
        cin>>queries[i][0]>>queries[i][1];

    }

    int start_;
    int end_;
    for(int i=0; i<k; i++)
    {

        start_ = queries[i][0];
        end_ = queries[i][1];

        for(int j=start_; j<=end_; j++)
        {
            if (combined_operations.find(j) == combined_operations.end())
            {
                combined_operations[j] = 1;
            }
            else {combined_operations[j] +=1;}
        }


    }

    int a,b,c;
    for(auto& it : combined_operations)
    {
        a = operations[it.first-1][0];
        b = operations[it.first-1][1];
        c = operations[it.first-1][2];
        for(int i=a; i<=b; i++)
        {
            if (changes.find(i) != changes.end())
            {

                changes[i] += c * combined_operations[it.first];
            }

        }




    }


    for(int i=0; i<n; i++)
    {
        tab[i] += changes[tab[i]];


    }

    for(int i=0; i<n; i++)
        cout<<tab[i]<<" ";

}
