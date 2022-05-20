#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
int n,fac;
cout<<"Enter the number to which factorial to be calculated";
cin>>n;
fac = fact(n);
cout<<"The factorial of the number "<<n<<"is "<<fac;
return 0;
}