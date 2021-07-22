#include<iostream>
using namespace std;

int factorial(int n)
{
    cout << n << '\n';
    if(n == 0){
        return 1;
    }
    int sml =  factorial(n-1); // 4 -> 3 , 3 -> 2 , 2 -> 1 , 1 -> 0 , sml = 1
    sml = n* sml;
    return sml;

}


int main(){
int n;
cin >> n;
int out = factorial(n);
 cout << out << '\n';
}