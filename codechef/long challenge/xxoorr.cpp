#include <iostream>
#include <vector>
#define maxx 100000
#define ll long long
using namespace std;


int main(){
int t;
cin >> t;
while(t--){
    ll n , k;
    cin>> n >> k;
    /*int a[maxx];
    for(int i = 0 ;  i < n ; i++){
        cin >> a[i];
    }*/
    vector<ll> a(n);
    for(auto &i:a){
        cin >> i;
    } 



