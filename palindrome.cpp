#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rem,rev=0,n,num;
    cout<<"Enter the number";
    cin>>n;
    num = n;
    while(n!=0)
    {
        rem = n%10;
        rev  = rev*10 + rem;
        n=n/10;

    }
    if(num==rev)
       cout<<"The entered number "<<num<<" is a palindrome "<<rev;
    else
       cout<<"The entered number "<<num<<" is not a palindrome "<<rev;

}