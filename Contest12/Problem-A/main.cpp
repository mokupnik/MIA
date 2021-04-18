#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    int r1,c1;
    int rf, cf;

    cin>>r1>>c1>>rf>>cf;
    int rook_moves =0;
    int bishop_moves =0;
    int king_moves =0;

    if(c1==cf || r1==rf)
    {
        rook_moves = 1;
    }
    else{

        rook_moves =2;
    }



    int r_diff = abs(rf -r1);
    int c_diff = abs(cf-c1);

    king_moves = max(r_diff, c_diff);




    int possible = 0;
    if((r1%2 + c1%2)%2 == (rf%2 + cf%2)%2)
    {
        possible=1;
    }




    if(r_diff == c_diff)
    {

        bishop_moves=1;


    }
    else{
        bishop_moves=2;

    }

    if(possible==0)
    {
        bishop_moves=0;
    }




    cout<<rook_moves<<" "<<bishop_moves<<" "<<king_moves;



}
