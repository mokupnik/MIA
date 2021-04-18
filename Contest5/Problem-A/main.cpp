#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int h[n];
    int sums[n-k + 1];
    for(int i=0; i<n; i++)
        cin>>h[i];

    for(int i=0; i<(n-k+1); i++)
        sums[i] = 0;

    for(int i=0; i<k; i++)
        sums[0] += h[i];


    for(int i=1; i<(n-k+1); i++)
        {sums[i] = sums[i-1] + h[k + i -1] - h[i-1];
        }

    int mini = -1;
    int index = 0;
    for(int i=0; i<(n-k+1); i++)
        {
            if (sums[i] < mini || mini==-1)
            {
                index=i;
                mini= sums[i];

            }

        }


    cout<<index+1;


    return 0;
}
