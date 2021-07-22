#include<iostream>
#include<sstream>
using namespace std;

void printsubs(string input , string output){
    //base case
    if(input.empty())

    { 
       cout << output <<'\n';
       return;
    }

  //recusion
  printsubs(input.substr(1),output);
  printsubs(input.substr(1), output + input[0]);


}

int main(){
    string input;
    getline(cin, input);
    string output = "";
  printsubs(input,output);
  
}