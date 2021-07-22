#include<iostream>
using namespace  std;

int main(){
    int n,p,v,t,num=0;
    cin >>n;
    for(int i=0 ;i < n;++i){
        cin >> p >> v >> t;

        if (p+v+t >=2)
        {
            num++;
        }
}
cout << num << '\n';
}