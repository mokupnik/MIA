#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int p[n];

    int money =0;
    int today_price =-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>p[i];
    }

    for(int i=0; i<n; i++)
    {
        if (i==0)
        {
            today_price = p[i];
        }

        if (p[i] < today_price)
        {
            today_price = p[i];


        }

     money+= a[i] * today_price;



    }
    cout<<money;
    return 0;
}
