#include<iostream>
#include"trie.h"
using namespace std;
int main(){
    Trie t;
    t.insertword("abc");
    t.insertword("are");
    t.insertword("dot");

    cout << t.search("and") << '\n';
    t.removeword("and");

    cout << t.search("and") << '\n';
}