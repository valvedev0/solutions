#include<iostream>
using namespace std;

int first(int a[],int size,int x, int ci){
      if (size == 0){
          return -1;
      }
      if (a[ci] == x) {
		return ci;
	}
    int takeout = first(a , size , x,ci+1);
    if (takeout = -1) { return -1;}
    else{
    return takeout + 1;
    }



}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ;  i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    int fi = first(a,n,x,0);
    
    cout << fi << '\n';
}