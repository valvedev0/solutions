#include<iostream>
#include<math.h>

#define long long int;

using namespace std;
const unsigned int M = 1000000007;
int main(){
      ios_base::sync_with_stdio(false);
     cin.tie(NULL);
   int t;
   cin >> t;
   while(t--){
         int n,k ;

                 int x=0;
         cin >> n;
 
         k = (pow(2,n)) - 1;
      
         for(char i = 0 ; i <  k ; i++ ){

            if ( i ^ (i +1 ) == ( i+2 ) ^ ( i+3 ) ){ 
                 x++;
               }

         }
        cout << x%M<< '\n';

   }
}

