#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;
 int main(){
     int t ;
     cin >> t;
     while(t--){
         int n;
         cin >> n;
         int a[n];
         int b[n];
        for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        }
        
        for(int j = 0 ; j < n ; j++){
        cin >> b[j];
        }

        int k = (n - ((floor)(n/4)));
       
       sort(a, a + n, greater<int>());
       sort(b, b + n, greater<int>());
int sum = 0 ;
 for(int i = 0 ; i < k ; i++){
     sum = sum + a[i];
 }
 int sum2 = 0;
 for(int i = 0 ; i < k ; i++){
     sum2 = sum2 + b[i];
 }

           




     }
 }