#include<iostream>
#include<string>
#include<cstring> 
using namespace std;
const int N = 10000010;
int n,m,l,r,prime[N],f[N],s[N];

void init(){
    int i , j ;
    memset(prime,0,sizeof(prime));
    memset(f,0,sizeof(f));
    memset(s,0,sizeof(s));
    cin >> n;
    for(int i = 0 ;  i< n ; i++){
        int tmp;
        cin >> tmp ;
        s[tmp]++;
  }


for(int i = 2 ;  i <N ;  i++){
        if(prime[i])continue;
        
           for(int j = i ;  j <N ;  j+=i)
           {
               if(s[j]) f[i] +=s[j];
               prime[j] = 1;
           }
}
for(i = 2 ; i <=N ; i++) {
    f[i]+=f[i-1];
}
}

void solve(){
    cin >> m;
    for(int i  =1 ; i <=m ;++i){
        cin >> l >>r;
    if(l>N) l= N;
    if(r>N) r=N;
    cout << f[r] - f[l-1]<<'\n';
    }

}




int main(){
     ios::sync_with_stdio(false);
     init();
     solve();
     return 0;

}