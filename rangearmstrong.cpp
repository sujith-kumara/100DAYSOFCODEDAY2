#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rem,sum,lower,upper,i,n;
    cout<<"Enter the lower and upper limit";
    cin>>lower>>upper;
    for(i=lower;i<upper;i++)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
            rem =n%10;
            sum=sum+rem*rem*rem;
            n=n/10;
        }
        if(sum==i)
           cout<<i<<endl;
        
    }
    return 0;

}