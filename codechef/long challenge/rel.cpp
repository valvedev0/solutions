#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    long long g,c;
    cin >> g >> c;
    long long h = (c*c)/(2*g);
    cout << h << "\n";
}
}
 