#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> xs;
    unordered_map<int, int> ys;
    int walls_count = 0;
    int n;
    int m;
    int walls_destroyed =0;
    cin>>n>>m;
    int x_walls =0;
    int y_walls =0;
    char tab[n][m];

    int where_x =0;
    int where_y=0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            {
                cin>>tab[i][j];

                if(tab[i][j] == '*')
                {
                 walls_count ++;
                    if (xs.find(i) == xs.end())
                        {
                            xs[i] = 1;
                        }
                else xs[i] +=1;

                if (ys.find(j) == ys.end())
                        {
                            ys[j] = 1;
                        }
                else ys[j] +=1;


                }

            }


    if(walls_count == 0)
    {   cout<<"YES"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }


    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
        x_walls =0;
        y_walls=0;
        if (!(xs.find(i) == xs.end()))
        {
            x_walls = xs[i];
        {
            x_walls = xs[i];
        }
        }
        if (!(ys.find(j) == ys.end()))
        {
            y_walls = ys[j];
        }
        walls_destroyed = y_walls + x_walls;
        if(tab[i][j] == '*')
            walls_destroyed -=1;

        if(walls_destroyed == walls_count)
        {
            where_x = i+1;
            where_y = j+1;

        }


        }


    if(where_x == 0)
    {
        cout<<"NO"<<endl;
    }
    else {

        cout<<"YES"<<endl;
        cout<<where_x<<" "<<where_y;
    }


    return 0;
}
