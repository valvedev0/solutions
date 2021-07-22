#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
     while(t--){
         int n;
          int count= 0;
          int sum =0;
                  
         cin >> n;
         int a[100];
         for(int i = 0 ; i < n ; i++ ){
             cin >> a[i];
         }
    
        
          for (int i=0; i <n; i++)
        {
      
        for (int j=i; j<n; j++)
        {
            
            for (int k=i; k<=j; k++){
                sum+=a[i];
               int   average = (sum/n-j); 
                 if(a[i] > average){
                     count++;
                     
                 }
                 
             
                            }
                         
            
        }
        }
        cout << count << endl;




     }
}