#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> dupli(int *a, int size){
    vector<int> output;
    unordered_map<int, bool> umap;
    for(int i = 0 ; i < size; i++ ){
        if(umap.count(a[i]) > 0){
            continue;
        }
        umap[a[i]] = true;
        output.push_back(a[i]);
    }

    return output;

    
}

int main(){
int n;
cin >> n;
int a[n];
for(int i = 0 ; i < n; i++ ){
    cin >> a[i];
}

vector<int> output = dupli(a, n);
for(int i = 0 ; i < output.size(); i++ ){
    cout << output[i] << " ";
}
cout << '\n';
}