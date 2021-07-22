#include <iostream>


using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){

    
    int d,D,a,b,c;
   cin >> d >> D >> a >> b >> c;

   if(  (d*D) >=10 && (d*D) < 21    ){ cout << a <<'\n';}
   else if( (d*D) >=21 && (d*D)  <42 ){ cout << b <<'\n';}
  else  if( (d*D) >= 42){ cout << c <<'\n';}
    else  { cout << 0 <<'\n';}

}
}