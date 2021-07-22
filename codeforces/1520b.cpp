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
         int n ;
         cin >> n;
         int ans = 0 ;
         for(int i = 1  ; i <= n ; i = (i*10)+1){
             for (int d = 1; d <= 9;  d++) {
                    if (i * d <= n) {
                  ans++;
      }
             
             
         }
         }
         cout << ans << '\n';

     }
     }
     