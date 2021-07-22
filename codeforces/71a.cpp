#include<iostream>
using namespace std;
int  main() {
string s;
int n;
cin>>n;
for(int i=0 ; i<n; i++)
{
cin >>s;

int m = s.size();

if(m > 10){
    int k = m-2;
    cout << s[0] << k << s[m-1]<< '\n';

}
else{
    cout << s<< '\n';
}

}    
}