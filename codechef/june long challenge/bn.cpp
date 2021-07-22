

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
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
			
		 for(i=0; i < n; i++)    
{    
        a[i]=n%2;    
        n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}
}  
