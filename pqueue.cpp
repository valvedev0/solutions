#include <iostream>
#include <queue>
using namespace std;


int main(){
    priority_queue<int> pq;
    int n ;
    cin >> n ;

    for(int i= 0 ; i < n ; i++){
        int eme;
        cin >> eme ;
        pq.push(eme);
    }

    while(!pq.empty()){
        cout << pq.top() << ' ' ;
        pq.pop();
    }

    cout << '\n';



}