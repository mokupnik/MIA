#include <iostream>
#include <math.h>
using namespace std;

bool distinc(int first, int second, int third, int fourth)
{
    int tab[4];
    tab[0] = first;
    tab[1] = second;
    tab[2] = third;
    tab[3] = fourth;
    for(int i=0; i<4; i++)
        for(int j=i+1; j<4; j++)
    {
        if(tab[i] == tab[j])
        {
            return false;

        }


    }

    return true;

}

int get_numbers(int year)
{

    int first = (year - (year % 1000)) / 1000;
    int second = ((year % 1000) - ((year % 1000) % 100))/100;
    int third_help  = year % 1000 - second * 100;
    int third = (third_help - third_help%10)/10;
    int fourth = year % 10;

    return first,second,third,fourth;


}

int main()
{
    int year;
    cin>>year;

    year ++;
    while(true)
    {

        int first = (year - (year % 1000)) / 1000;
        int second = ((year % 1000) - ((year % 1000) % 100))/100;
        int third_help  = year % 1000 - second * 100;
        int third = (third_help - third_help%10)/10;
        int fourth = year % 10;
        if(distinc(first, second, third, fourth))
            {
             break;

            }

        year++;



    }
    cout<<year;


    return 0;
}
