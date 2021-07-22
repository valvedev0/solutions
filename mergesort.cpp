#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int i = l;
    int j = mid+1;
    int k = l;
    int temp[r+1];
    while(i <= mid && j <= r){
        if(arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++ ; k++;
        }
        else{
            temp[k] = arr[j];
            j++;k++;
        }
    }
    while(i <= mid){
       
            temp[k] = arr[i];
            i++ ; k++;
    }
      while(j <= r){
       
            temp[k] = arr[j];
            j++ ; k++;
    }
    for (int p = l ; p <=r; p++)
    {
        arr[p] = temp[p];
    }
}

void mergesort(int arr[], int l ,int r){

    if(l<r){
    int mid = (l+r)/2;
    mergesort(arr, l, mid);
    mergesort(arr,mid+1,r);
    merge(arr, l, mid, r);
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    int size;
    cin>> size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    
    mergesort(arr, 0, (size-1));
   
   for(int i = 0 ; i < size ; i++){
        cout <<  arr[i] << " ";
    }
}

