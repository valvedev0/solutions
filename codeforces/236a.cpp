#include <iostream>
#include <string>
#include<algorithm>
#define ll long long
// #define rep1(i,a,b) for (int i = a;i <= b;i++)
 
using namespace std;
 
const int N = 1500*1500;

 
int main(){

    string s;
    cin >> s;
    int n = s.length();
    int dis = 0;
    sort(s.begin(),s.end());
    
    
       for (int i=1 ; i<n ;i++){
           if(s[i] != s[i-1] ){
               dis++;
           }
        }
     
      
       if((dis+1)%2==0){
         cout << "CHAT WITH HER!" <<'\n';
       
       }
       else{
           cout << "IGNORE HIM!" <<'\n';
       
       }
}
        
  

        

