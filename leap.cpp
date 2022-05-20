#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year ";
    cin>>year;

    if((year%400 == 0)   && (year%100 == 0) )
         cout<<"The entered year is a leap year";
    else if((year%100 !=0)  && year%4 == 0 )
         cout<<"The entered year is a leap year";
    else
         cout<<"The entered year is not a leap year";
}