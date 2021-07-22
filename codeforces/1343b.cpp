

#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t ;
	while(t--){
		int n;
		cin >> n;
		if(n%4!=0){
			cout << "NO" <<'\n';
			continue;
		}
		cout << "YES" <<'\n';
		int sum1=0;
		int sum2=0;
		
		for(int i = 1; i<=n/2 ; i++)
		{
			if ( i%2==0){
			
				cout << i <<" " ;
				sum1+=i;
			}
		}
			for(int i = n/2; i<=n ; i++)
		{
			if ( i%2!=0){
				cout << i <<" " ;
				sum2+=i;
			}
			
			}
			cout <<'\n';
			
}
}
	
