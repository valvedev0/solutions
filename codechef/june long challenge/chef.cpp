#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t ;
	while(t--){
		int x1,x2,y1,y2,z1,z2;
		cin >> x1 >>x2 >>y1>>y2>>z1>>z2;
		
		if ((x1<=x2) && (y1<=y2) && (z1>=z2)){
			cout << "YES" <<'\n';
		}
		else{
			cout << "NO" <<'\n';
		}
	}
}
