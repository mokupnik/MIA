#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int tab[T][2];

    for (int i=0; i<T; i++)
    {   cin>>tab[i][0];
        cin>>tab[i][1];


    }



    int results[T];
    for (int i=0; i<T; i++)
    {
        results[i] = 2 - tab[i][0] + tab[i][1];
    }

    for(int i=0; i<T; i++)
        cout<<results[i]<<endl;


    return 0;
}
