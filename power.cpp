#include<bits/stdc++.h>
using namespace std;
int main(){
    int exponent;
    float base,result =1;
    cout<<"Enter the base and  exponent";
    cin>>base>>exponent;
     cout<<base<<" ^ "<<exponent<<" = ";
    while(exponent!=0)
    {
        result *= base;
        --exponent;

    }

    cout<<result;

   
    return 0;
}