#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int tab[n];


    char symbols[n];
    for(int i=0; i<n; i++)
    {
        cin>>symbols[i];


    }

    for(int i=0; i<n; i++)
        cin>>tab[i];


    int mini = -1;
    int min_temp = 100;
    for(int i=0; i<n-1; i++)
    {
        if(symbols[i] == 'R'&& symbols[i+1] == 'L')
        {
            min_temp = ceil((tab[i+1] - tab[i])/2);
            if (mini>min_temp || mini == -1)
            {
                mini = min_temp;
            }

        }


    }

	cout<<mini;


}
