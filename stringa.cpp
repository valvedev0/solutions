#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    cout << s <<'\n';
    cout << s.size() <<'\n';
    cout << s.length() <<'\n';
    cout << s.substr(3,6) <<'\n';
    cout << s.find("v") <<'\n';

}