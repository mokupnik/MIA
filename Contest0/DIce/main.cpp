#include <iostream>
#include <math.h>
using namespace std;
long double expected_maximum(long long n, long long m)
{
long double mn = pow(m,-n);

long double sum=0;
for(int i=1; i<m; i++)
{
    sum+= pow(i,n);
}

        return m - mn*sum;

}
int main()
{

    long long n,m;
    cin>>m;
    cin>>n;

    cout<<expected_maximum(n,m);
    return 0;
}
