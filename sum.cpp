#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter the number of natural numbers";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      sum+=i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}