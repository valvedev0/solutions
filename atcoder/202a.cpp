#include<iostream>
using namespace std;
int main(){
 int a,b,c,sum =0;
 cin >> a >> b >> c;
 int a1=0,b1=0,c1=0;
for(int i =1 ; i <= 6; i++)
{
    if(i==a){ 
        a1= 7 - i;
       }
       if(i==b){ 
        b1= 7 - i;
       }
       if(i==c){ 
        c1= 7 - i;
       }
       }

       sum = a1+b1+c1;
       cout << sum <<'\n';

}