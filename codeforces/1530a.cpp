#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
 int main(){
     int t ;
     cin >> t;
     while(t--){
         int n; 
         cin >> n;
         int ans = 0;
        while(n){
            int rem = n % 10;
            ans = max(rem,ans);
            n = n/10;

        }
        cout << ans << '\n';
     }
 }
 