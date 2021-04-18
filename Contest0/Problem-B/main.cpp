#include <iostream>
#include <math.h>
using namespace std;

int if_prime(int x)
{
    if(x==1) {return 0;}
    long double sq = sqrt(x);
    for(int i=2; i<=floor(sq); i++)
    {
        if(x % i ==0)
        {
            return 0;
        }


    }

    return 1;

}
int main()
{
 int a,b,k;
 cin>>a>>b>>k;

 if(b-a < k)
 {
     cout<<"-1";
     return 0;
 }


 int n = b-a +1;

int tab[n];

 int count_=0;
 int i=0;
 int index =a;
 while(index<= b)
 {


    tab[i] = if_prime(index);
    i++;
    index++;


 }
int l =k;
i=0;
long int sum=0;
while(l   <= b-a+1 && i < b-a)
{
    if(i ==0)
    {
        if(l==1)
        {
            sum = tab[0];
        }
        else {
        for(int i=0; i<l-1; i++)
            sum+= tab[i];
        }
        i=l-1;
    }
    else{

        sum = sum - tab[i-l+1] + tab[i+1];

    }

    if(sum >= k)
    {
        i++;
    }
    else{
        sum=0;
        l++;
        i=0;
    }


}
if(sum>=k)
    {cout<<l;
    }
else{cout<<-1;}

 return 0;
}
