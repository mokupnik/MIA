#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int value;
    int p[n];
    int sums[n];
    for(int i=0; i<n-1; i++)
    {

        cout<<"? "<<i+1<<" "<<n<<endl;
        fflush(stdout);
        cin>>sums[i];

    }

    for(int i=0; i<n-2; i++)
    {
        p[i] = sums[i] - sums[i+1];
    }

    cout<<"? "<<1<<" "<<n-1<<endl;
    fflush(stdout);
    int val;
    cin>>val;
    p[n-1] = sums[0] - val;

    int all_sum = 0;
    for(int i=0; i<n; i++)
    {
        if(i!=n-2)
        {

            all_sum +=p[i];

        }
    }

    p[n-2] = sums[0] - all_sum;
    cout<<"! ";
    fflush(stdout);
    for(int i=0; i<n; i++)
    {
        cout<<p[i] <<" ";
        fflush(stdout);


    }

    return 0;
}
