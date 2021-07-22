
 
#include <iostream>
using namespace std;
 
// Function to calculate the count
// of similar rectangles

 
// Driver Code
int main()
{
    int t,c;
    cin >> t >>c;
    
  
    int A[t][2];
    
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
      
    }

    
         
    int columns = 2;
    int rows = sizeof(A) / sizeof(A[0]);
 
      int res = 0;
 
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
 
            if (A[i][0] *  A[j][1]
                == A[i][1] *  A[j][0]) {
 
                res++;
            }
        }
    }
    
  cout << res << '\n';
   
}