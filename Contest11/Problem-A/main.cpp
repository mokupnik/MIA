#include <iostream>

using namespace std;



int main()
{
    int a,b;
    cin>>a>>b;
    int x;
    x = max(a,b);
    int needed=0;
    needed = 6-x+1;
    if(needed==6)
    {
        cout<<"1/1";
    }
    else{

        int k = 6;
        for(int i=1; i<6; i++)
        {
            if(needed%i ==0 && k%i==0)
            {
                needed=needed/i;
                k=k/i;
            }

        }
       cout<<needed<<"/"<<k;
    }



    return 0;
}
