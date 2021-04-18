#include <iostream>

using namespace std;

int main()
{
    int n,m,q;

    cin>>n>>m>>q;

    long long tab[n];
    for(int i=0; i<n; i++)
        cin>>tab[i];


    long long operations[m][3];

    for(int i=0; i<m; i++)
    {
        cin>>operations[i][0]>>operations[i][1]>>operations[i][2];
        operations[i][0] --;
        operations[i][1] --;


    }
    long long queries[q][2];
    for(int i=0; i<q; i++)
    {
        cin>>queries[i][0];
        cin>>queries[i][1];
        queries[i][0] --;
        queries[i][1] --;

    }


// we calculate what times operation would be used by count_operations;


long long count_operations[m];

for(int i=0; i<m; i++)
    count_operations[i] =0;

// for each query we increment index of operations used
for(int i=0; i<q; i++)
{
    int a = queries[i][0];
    int b = queries[i][1];
    count_operations[a] ++;
    if(b<m-1)
    {
    count_operations[b+1] --;
    }

}



for(int i=0; i<m; i++)
{
    if(i!=0)
    {
        count_operations[i] += count_operations[i-1];
    }

}


long long cummulated_values[n];
long long change_values[n];

for(int i=0; i<n; i++)
    change_values[i] = 0;
for(int i=0; i<m; i++)
{
    long long count_ = count_operations[i];
    int start = operations[i][0];
    int end_ = operations[i][1];
    long long d = operations[i][2];
    if(end_ < n)
{
    change_values[start] += count_*d;
    change_values[end_+1] -= count_*d;
}

else {
    change_values[start] += count_*d;

}
}



for(int i=0; i<n; i++)
{
    if(i==0)
    {
        cummulated_values[i] = change_values[i];
    }
    else {

        cummulated_values[i] = change_values[i] + cummulated_values[i-1];
    }
}

for(int i=0; i<n; i++)
    cout<<tab[i] + cummulated_values[i]<<" ";

return 0;
}
