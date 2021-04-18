#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double sq;
    int second = 0;
    int happened =0;


    sq = sqrt(n);
    for(int i=1; i<sq; i++)
    {

        second = (int) sqrt((n - i*(i+1)/2 )*2);


        if(((i*(i+1))/2 + second * (second + 1) / 2) == n)
        {happened =1;
        break;

        }
    }


    if (happened)
    {
        cout<<"YES";


    }

    else
    {
        cout<<"NO";
    }
    return 0;
}
