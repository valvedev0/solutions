#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    int d,x,y,z;
    cin >> d >> x >> y >> z;
    int a1=0,a2=0,a3=0;
    a1 = (x*7);
    a2 = (y*d)+((7-d)*z);
    a3 = max(a1,a2);
    cout << a3 << "\n";

}
}