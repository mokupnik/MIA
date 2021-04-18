#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int distance(int day)
{
    int october_27 = 300;
    if(day==300)
    {
        return 365;
    }
    if(day < october_27)
    {
        return 365 - october_27 + day;
    }

    else return day-october_27;

}

int convert_to_number(string data)
{
    string s = data.substr(0,1);
    if(s == "0")
    {
        return stoi(data.substr(1,2));
    }
    else return stoi(data.substr(0,2));



}

int main()
{
    int months[12] = {31, 28, 31,30,31, 30, 31, 31, 30, 31, 30, 31};
    int days[12];

    for(int i=0; i<12; i++)
    {
        int sum=0;
        for(int j=0; j<i; j++)
        {
            sum+=months[j];

        }
        days[i] = sum;

    }




    int n;
    string name;
    cin>>n;
    string date[n];
    int dni[n];

    for(int i=0; i<n; i++)
    {

        cin>>name;
        cin>>date[i];

    }


int m=0;
int d=0;
    for(int i=0; i<n; i++)
    {   //mm-dd
        m = convert_to_number(date[i].substr(0,2));
        d = convert_to_number(date[i].substr(3));
        dni[i] = days[m-1] + d;


    }



    sort(dni, dni+n);

    int temp_when =0;
    int d1=0;
    int d2=0;

    int mini = 0;
    int when = 0;

    for(int i=0; i<n-1; i++)
    {


        if(dni[i+1] - dni[i] > mini)
        {
            mini = dni[i+1] - dni[i];
            when = dni[i+1] - 1;

        }
        if(dni[i+1] - dni[i] == mini)
        {

            temp_when = dni[i+1]-1;
            if(when == 0)
            {
                when = 365;
            }
            if(temp_when == 0)
            {
                temp_when = 365;
            }

            d1 = distance(temp_when);
            d2 = distance(when);

            if(d1 > d2 && d2 != 0)
            {
                when = temp_when;

            }


        }
    if(when==0)
    {
        when = 365;

    }

    }

    if(n==1)
    {
       when = dni[0]-1;

    }

    int last_first =0;

    if(n!=1)
        {last_first = 365 - dni[n-1] + dni[0];


    if(last_first > mini)
    {
        when = dni[0]-1;
        if(when==0)
        {
            when = 365;
        }
    }

    if(last_first == mini)
    {
        temp_when = dni[0] -1;
        if(temp_when==0)
        {
            temp_when=365;
        }

        d1 = distance(when);
        d2=distance(temp_when);
        if(d1 > d2)
            {
                when = temp_when;

            }
    }
        }
    int i=0;



    if(when == 0)
    {
        when = 365;
    }

    while(days[i]<when && i<12)
    {
        i++;


    }


    int what_month = i;
    int what_day = when - days[i-1];


    if(what_month < 10)
    {
        cout<<"0"<<what_month;
    }
    else {cout<<what_month;}

    if(what_day <10)
    {
        cout<<"-0"<<what_day;
    }
    else {cout<<"-"<<what_day;}

    return 0;
}
