#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long k;
    cin>>n>>k;

    unsigned long long rest = n%k;
    unsigned long long turns = (n-rest)/k;

    if(turns%2 == 0)
    {
        cout<<"NO";
    }
    else{cout<<"YES";}

    return 0;
}
