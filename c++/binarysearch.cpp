#include<iostream>
#include<vector>
using namespace std;

constexpr int nf = -1;

int search(int element,const int* v,int size)
{
    int left = 0;
    int right  = size -1;
    while (left <= right){
        int middle = (left +right)/2;
        if (v[middle]== element){
            return middle;
        }
        if(v[middle]< element){
            left =  middle +1;
        }
         if(v[middle]> element){
            left =  middle -1;
        }
    }




    
            return nf;
}   
    



void print(const vector<int>&v){
    for (int x :v)
    {
        cout << x << ' ';
    }

}


int main()
{
    vector<int> v{1,2,3,4,5,6,9,48};
    print(v);
    cout<< "enter search item\n";
    int x;
    cin >> x;

    int pos = search(x, v.data(),v.size());
    if(pos==nf){cout << "not found";}
    else {
        cout << "element at "<< pos << '\n'; 
    }


}
