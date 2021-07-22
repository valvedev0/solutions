#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
 
 
void solve(){
    ll n;
    cin>>n;
    ll arr[n],vis[n];
    ll ct=0,pos=-1;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=7)
            ct++;
        if(ct==7){
            pos=i+1;
            ct++;
        }
    }
    cout<<pos<<endl;
}
 
int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
