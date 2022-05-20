#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,hcf,i,temp;
    cout<<"Enter the numbers";
    cin>>n1>>n2;

    if(n2>n1)
    {
        temp = n1;
        n1 =n2;
        n2 =temp;
    }

    for(i=1;i<=n2;++i)
    {
        if((n1%i == 0) && (n2 % i ==0))
          hcf = i;
    }
    cout<<"The gcd is "<<hcf;
    return 0;
}