

#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
 int main(){
	 int n;
	 cin >> n;
	 string s;
	 cin >> s;
	 int ans = 0;
	 for (int i=0 ; i <n ; i++){
		 if(s[i] == s[i+1]){
			 ans++;
		 }
	 }
	 cout << ans << '\n';
 }
