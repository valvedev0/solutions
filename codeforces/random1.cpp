#include <iostream>
#include<algorithm>

using namespace std;
int main(){

	int a[10];
	a[0] = 10;
	
	a[1] = 20;
	
	a[2] = 25;

   int* p = a;

   cout << a << '\n' ; //adress
   
   cout << *a << '\n' ; // 10
   
   cout << *(a+1) << '\n' ; // 20
   
   cout << p << '\n' ; // adress

   
   cout << *p << '\n' ; // 10

   p = a+1;
   
   cout << p << '\n' ;

   cout << *p << '\n' ;
   

}
