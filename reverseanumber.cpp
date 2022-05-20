#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,reverse =0,remainder,number;
    cout<<"Enter the number";
    cin>>n;
    number=n;
    while(n!=0)
    {
        remainder = n%10;
        reverse = reverse*10+remainder;
        n=n/10;
    }
    cout<<"The reverse of the number  "<<number<<" is "<<reverse;
    return 0;
}