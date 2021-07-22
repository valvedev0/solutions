
#include <iostream>
using namespace std;

#define int long long

void solve(){
	int s;
	cin >> s;
	
	int val = 1;
	int count = 1;
	int max = 1;
	
	
	while(max < s){
		val+=2;
		count++;
		max+= val;
	}
	cout << count <<'\n';
}
	
	


signed main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t;
    cin >> t ;
    while(t--) solve();
	

  return 0;
	
}
