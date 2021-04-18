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


if(a== b && k>1)
{

    cout<<-1;
    return 0;

}

if(a==b && k==1)
{
    if( if_prime(a))
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }

    return 0;

}
if(b-a <k)
{
    cout<<-1;
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

 int sum[n];
 for(int i=0; i<n; i++)
 {
     if(i==0)
     {

         sum[i] = tab[i];
     }

     else{

        sum[i] = sum[i-1] + tab[i];
     }
 }


//for(int i=0; i<n; i++)
  //  cout<<sum[i]<<" ";

//cout<<endl;


int l=k;

int last =l-1;
int suma = -1;

int start_ = 0;
int first =0;
while(last <= n)
{

    if(suma==-1)
    {

        suma=sum[last];

    }

    else
    {

        if(suma<k)
        {
        last++;
          l++;
          suma +=tab[last];

        }
        if(suma>=k)
        {
           suma = sum[last] - sum[first];
            first++;
            last++;
        }




    }


 }



if(suma>=k)
    {cout<<l;
    }
else{cout<<-1;}

 return 0;
}
