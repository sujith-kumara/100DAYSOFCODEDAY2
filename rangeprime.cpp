#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,l,h,j;
    bool flag ;
    cout<<"Enter the lower limit and upper ";
    cin>>l>>h;
    for(i=l;i<h;i++)
    { 
         if(i==0 || i== 1)
            continue;
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
              { flag=1;
               break;}
        }
        if(flag==0)
            cout<<i<<endl;
    }


  return 0;
}