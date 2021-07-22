#include<iostream>
#include<math.h>
#define long long int;

using namespace std;
int main(){
      ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    

int t;
cin >> t;
while (t--){
    int n,x,k, c1 =0, c2 =0;
    cin >> n>>x >> k;
    
    for (int i =0 ; i < n+2 ; i+=k){
        if(i==x) { c1 = 10; break; }
       else {  c1 = 20;}
        }
    
       for (int j =n+1 ; j >= 0 ; j-=k){
              if(j==x){  c2 = 10; break; }
              else { c2 = 20 ;}

    }
    if ( c1 == 10 || c2 == 10){ cout << "YES" << '\n';}
    
    else if ( c1 == 20 || c2 == 20){ cout << "NO" << '\n';}
    

    
}
}