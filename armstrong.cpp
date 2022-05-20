#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,num,sum=0;
    cout<<"Enter the number to be checked";
    cin>>n;
    num =n;
    while(n!=0)
    {
        rem = n%10;
        sum= sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==num)
        cout<<"armstrong number";
    else
        cout<<"not armstrong number";
    return 0;
}