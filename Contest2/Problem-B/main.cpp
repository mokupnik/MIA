#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int how_many =0;
    int tab[n];
    unordered_map<int,int> occ;
    for(int i=0; i<n; i++)
     {
        cin>>tab[i];

        if(tab[i]>n)
        {
            how_many +=1;

        }
        else {if (occ.find(tab[i]) == occ.end())
                        {
                            occ[tab[i]] = 0;
                        }
                else occ[tab[i]] +=1;
     }}

    for (auto& it: occ) {
    how_many += occ[it.first];
}

    cout<<how_many;
    return 0;
}
