

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	int n,x;
	int ans = 0 , ptotal = 0;
	cin >> n ;
	cin >> x;
	int p[n];
	for(int i = 0 ; i < n; i++){
		cin >> p[i] ;
	}
	
	for(int i = 0 ; i < n; i++){
		ans =  p[i]  + p[i+1];
		
		while (ans <= x){
			ptotal++;
			}  
		}
cout << ptotal <<'\n';
}
			
	
	
	
