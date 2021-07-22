#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
unordered_map<string, int> umap;
pair<string, int> p("abc", 1);
umap.insert(p);
umap["def"] = 2 ;
cout<< umap.at("def") <<'\n';
cout<< umap["abc"] <<'\n';
cout<< umap["def"] <<'\n';
cout<< umap.size() << '\n';

}