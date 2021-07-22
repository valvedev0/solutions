#include<iostream>
#include<sstream>
using namespace std;

int subs(string input , string output[]){
    //base case
    if(input.empty())

    { 
        output[0] = "";
        return 1;
    }

    //recursion

    string sms = input.substr(1);
    int smo = subs(sms,output); // abc -> bc -> 4
    for (int i = 0; i < smo; i++)
    {
        output[i+smo] = input[0] + output[i];
    }
     return 2 * smo;


}

int main(){
    string input;
    getline(cin, input);
    string* output = new string[10000];
    int count =  subs(input,output);
    for(int i = 0 ; i < count ; i++){
        cout << output[i] <<'\n';
    }
}