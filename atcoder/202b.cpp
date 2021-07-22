#include<iostream>
#include<algorithm>

#include<sstream>
using namespace std;
int main(){
 string str;
    cin >> str;

     string rev = string(str.rbegin(),str.rend());
     
    int myint1 = stoi(rev);
 
     for(int i = 0;  i < rev.length() ;i++){
             
         if(rev[i] == 6){
             rev[i] +=3  ;
         }
         if(rev[i] == 9){
             rev[i]-=3;
         }
        }

         cout << rev ;
  
}
