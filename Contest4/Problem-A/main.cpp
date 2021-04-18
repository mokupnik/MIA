#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> occ;
    int n,m;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    int helper[m];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
       {
            cin>>b[i];
            helper[i] = b[i];
            occ[b[i]] = 0;
       }

    sort(b, b+m);
    sort(a, a+n);


    int i=0;
    int j=0;

    int count_ =0;
    while(j<m)
    {
        while(b[j] >= a[i] && i<n)
        {
            count_ ++;
            i++;


        }
        occ[b[j]] = count_;
        j++;


    }


    for(int i=0; i<m; i++)
    {
      cout<<occ[helper[i]]<<" ";
    }

    return 0;
}
