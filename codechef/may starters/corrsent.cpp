#include<iostream>
#include <cstring>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int k ; 
        cin >> k ; 
        string s;
        cin >> s;
     int n = s.length();
      char cy[n + 1];
      int lolo= 0 ;
 
    
    strcpy(cy, s.c_str());
 
    for (int i = 0; i < n; i++){
        if ( cy[i] >= char(0 + 97) && cy[i] <= char(0 + 109) && cy[i] >= char(0 + 78) && cy[i] <= char(0 + 90)){
            lolo = 1 ;
        }
    }
        
    if (lolo = 1) { cout << "NO"<<'\n';}
    else { cout << "YES";}
    

    }
}