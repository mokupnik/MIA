#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int k[n][1000];
    unordered_map<int, int> tab[n];
    int number_of_votes[n];
    int vote;

    int new_votes;
    int new_element;

    int votes[n];
    int elements[n];


    for(int i=0; i<n; i++)
    {
    cin>>number_of_votes[i];
    for(int j=0; j<number_of_votes[i]; j++)
           {

            cin>>k[i][j];
           }


    }

    for(int i=0; i<n; i++)
        for(int j=0; j<number_of_votes[i]; j++)
    {


        vote = k[i][j];
        if (tab[i].find(vote) == tab[i].end())
                {
                            tab[i][vote] = 1;
                }
        else tab[i][vote] +=1;

    }

for(int i=0; i<n; i++)
{   votes[i] = 0;
    elements[i] = 101;

    for (auto& it: tab[i])
    {
        new_element = it.first;
        new_votes = tab[i][new_element];

        if(new_votes > votes[i])
        {

            votes[i] = new_votes;
            elements[i] = new_element;
        }

        if(new_votes == votes[i])
        {
            if(elements[i] > new_element)
            {
                elements[i] = new_element;
            }


        }

    }

}
    for(int i=0; i<n; i++)
        cout<<elements[i]<<endl;







    return 0;
}
