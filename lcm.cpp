#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,max,i,lcm;
    cout<<"Enter the numbers to which lcm is calculated";
    cin>>n1>>n2;
    max = (n1>n2)?n1:n2;

    do{
        if(max%n1==0 && max%n2==0)
        {
            lcm=max;
            break;
        }
        else
          ++max;

    }while(true);
    cout<<"LCM is "<<lcm;
    return 0;

}