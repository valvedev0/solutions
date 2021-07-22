#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
#define ll  long long 
const ll N = 1000000;
int main(){
    long long n;
    cin >> n;
    long long p[N] = {0};
    for(ll  i = 2 ;  i <= n ;  i++){
        if(p[i] == 0){
           for(ll  j = i*i ;  j <= n ;  j+=i)
           {
             p[j] = 1;           
        }
        }
    }

    for(ll  i = 2 ;  i <= n ;  i++){
        if(p[i] == 0){
            cout << i << ' ' ;
        }
    }
    cout << '\n';
}

    
