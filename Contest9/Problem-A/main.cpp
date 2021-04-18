#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std;

int sum_of_divisiors(int n)
{
    int sum=0;
    for(int i=1; i*i<=n; i++)
    {
        if( n%i == 0 && i*i !=n)
        {
            sum ++;
            sum ++;
        }
        if(i*i==n)
        {
          sum++;
        }

    }

    if(n==1)
    {
        sum=1;
    }
    return sum;

}


int main()
{
    unordered_map<int, int> d;
    int a;
    int b;
    int c;
    int sum = 0;
    cin>>a>>b>>c;

    for(int i=1; i<=a; i++)
      {
          for(int j=1; j<=b; j++)
          {
            for(int k=1; k<=c; k++)
            { int value = i*j*k;

                if (d.find(value) == d.end())
                {
                    d[value] = sum_of_divisiors(value);
                }

                sum += d[value];
                if(sum >= 1073741824 )
                {
                    sum = sum % 107374182;
                }

            }
          }}

    cout<<sum;
    return 0;
}
