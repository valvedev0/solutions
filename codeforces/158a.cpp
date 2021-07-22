#include<iostream>
using namespace std;

int main(){
    int n , k, num = 0;
    cin >> n >> k;
    int a[500];
    for (int  i = 0 ; i <n; i++){
        cin >> a[i];   
    }
    for (int  i = 0 ; i <n; i++){

    if (a[i] >= a[k-1] && a[i] > 0){
        num++;
      }
   }
 cout << num << '\n';
}