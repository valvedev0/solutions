#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

#define  long long int;

using namespace std;
int main(){
      ios_base::sync_with_stdio(false);
     cin.tie(NULL);

 
    int N; cin >> N;
    vector<pair<int,string>> data(N);
    for(int i=0; i<N; i++) cin >> data[i].second >> data[i].first;
    sort(data.begin(),data.end(),std::greater{});
    cout << data[1].second << endl;
}
     
            


