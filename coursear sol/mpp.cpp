#include<iostream>
#include<algorithm>
using namespace std;

int  main(){
  int64_t n,p=0;
  cin >> n;
 int64_t a[n];
  
  for (int i =0 ; i < n ; i++){
      cin >> a[i];
  }
  sort(a,a+n);
    p =  a[n-1]*a[n-2];

cout << p << '\n';
 }



