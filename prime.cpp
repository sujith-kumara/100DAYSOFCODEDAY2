#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    bool flag=0;
    cout<<"Enter the number";
    cin>>n;
    if(n==0 || n==1)
        {
            cout<<"not prime";
            return 0;
        }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
           flag = 1;
    }
    if(flag==0)
       cout<<"Prime";
    else
       cout<<"not prime";
}