#include<iostream>
#include<algorithm>
using namespace std;
 

bool checkIsAP(int arr[], int n)
{
  if (n == 1)
    return true;
 
  // Sort array
  sort(arr, arr + n);
 
  // After sorting, difference between
  // consecutive elements must be same.
  int d = arr[1] - arr[0];
  for (int i=2; i<n; i++)
    if (arr[i] - arr[i-1] != d)
      return false;
 
  return true;
}
 
// Driven Program
int main()
{
  int arr[3] ;
  for(int i=0; i<3 ; i++)
  { cin >> arr[i]; }
  int n = sizeof(arr)/sizeof(arr[0]);
 
  (checkIsAP(arr, n))? (cout << "Yes" << endl) :
                       (cout << "No" << endl);
 
  return 0;
}