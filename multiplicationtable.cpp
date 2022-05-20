#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number to which multiplication table is to be generated";
    cin>>n;
    for(i=1;i<=10;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    return 0;
}