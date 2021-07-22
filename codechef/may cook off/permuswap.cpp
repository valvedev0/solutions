#include <iostream>
#include <algorithm>
using namespace std;
#define int   long long

 int32_t main(){

     int t;
     cin >> t;
     while (t--){
         int n;
         cin >> n;
         int pa1[10000];
         int pa2[10000] ;
	for (int i = 1; i <= n; i++) {
        cin >> pa1[i];
       
       }
       for (int i = 1; i <= n; i++) {
       
        cin >> pa2[i];
       }
    int q;
    
         int t1, t2,tx, ty,  t3,tx1;
         cin >> t1>>t2>>tx>> ty>>  t3 >>tx1;

     int pa3[10000]; 
    
   if(t1==1){
     for (int i = 1; i <= n; i++) {
         pa3[pa2[i]]=pa1[i];
     }
   }

    if(t2 == 2){
        int temp;
          temp = pa3[tx];
    pa3[tx] = pa3[ty];
    pa3[ty] = temp;
    } 
    if(t3 == 3){
        cout << tx1 << endl; 

    }
    
     }
 }
 
