#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int X;
    cin>>n>>X;

    int prices[n];

    for(int i=0; i<n; i++)
        cin>>prices[i];

    sort(prices, prices+n);

    int i=0;
    int j= n-1;
    int count_ = 0;
    while(i!=j&& j>i)
    {
        while((prices[i] + prices[j]) <= X&& i!=j && j > i)
        {

            count_ +=1;
            i++;


        }

    j--;


    }

    cout<<count_+1;
    return 0;
}
