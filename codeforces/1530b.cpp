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
         int h , w;
         cin >> h >> w;
         int ans[h][w];
        memset(ans, 0 , sizeof(ans));
        ans[0][0] = ans[h-1][0] = ans[0][w-1] =  ans[h-1][w-1] = 1;
        
        int num = (int)(ceil)(w/2.0);
        num-=2;
        int i = 2 ;
        //for 1st row
        while(num-- ){
         ans[0][i] = 1;
         i+=2;
           }
        //for last row
         for(int i=0;i<w;i++){
         ans[h-1][i] = ans[0][i];
        }
           //for 1st column
        num = (int)(ceil)(h/2.0);
        num-=2;
        i = 2 ;
        while(num-- ){
         ans[i][0] = 1;
         i+=2;
           }
           //for last column
          for(int i=0;i<h;i++){
         ans[i][w-1] = ans[i][0];
         
           }

       for(int i =0 ; i < h ; i++){
            for(int j =0 ; j < w ; j++){
                cout << ans[i][j]; 
            }
            cout<<'\n';
       }
       cout <<'\n';



















 



     }
 }
