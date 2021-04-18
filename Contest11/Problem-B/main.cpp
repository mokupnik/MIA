#include <iostream>

using namespace std;
long double n_choose_k(long long n, long long k)
{

    long double cummulative = 1;

    if(k*2 >n) return n_choose_k(n, n-k);

    if(k==0)
    {
        return 1;
    }

    for(int i=1; i<=k; i++)
 {

     cummulative *= (n+1-i);
    cummulative /= i;

}
    return cummulative;
}
int main()
{

    int n,m,h;

    cin>>n>>m>>h;
    h = h-1;
    long long wafa_students =0;
    long long rest_students = 0;
    long long players[m];
    for(int i=0; i<m; i++)
        {
            cin>>players[i];


        }

    for(int i=0; i<m; i++)
    {
        if(i==h)
        {
            wafa_students = players[i] -1;
        }
        else{
            rest_students +=players[i];

        }


    }

    if(rest_students + wafa_students + 1 < n)
    {
        cout<<"-1";
        return 0;
    }

    if(rest_students + 1 < n)
    {
        cout<<"1";
        return 0;

    }



    long double all_combinations = n_choose_k(rest_students + wafa_students,n-1);

    long double rest_combinations = n_choose_k(rest_students, n-1);
    cout<<1-(rest_combinations/all_combinations)<<endl;



    return 0;
}
