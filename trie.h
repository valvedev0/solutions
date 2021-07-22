#include<iostream>
#include<string>
#include "trienode.h"

class Trie {
    Trienode *root;

    public :

    Trie()
    {
        root =  new Trienode('\0');

    }
    bool search(Trienode *root, string word){

     if(word.size() == 0){
           return  root -> isTerminal;
            
        }
        //small calculation
         int index = word[0] -'a';
         Trienode *child;
         if(root ->children[index] != NULL ){
             child =  root ->children[index];
         }
         else {
               return false;
         }
         //recursiv call
         return search(child, word.substr(1));
    }
    bool search(string word){
        return search(root, word);
    }


    void insertword(Trienode *root , string word){
        // base case
         if(word.size() == 0){
            root -> isTerminal =true;
            return;        
        }
        //small calculation
         int index = word[0] -'a';
         Trienode *child;
         if(root ->children[index] != NULL ){
             child =  root ->children[index];
         }
         else {
             child = new Trienode(word[0]);
             root ->children[index] =  child;
         }
         //recursiv call
         insertword(child, word.substr(1));
    }

    //user 
    void insertword(string word){
          insertword(root,word);
    }

    void removeword(Trienode *root, string word) {
        // base case
        if(word.size() == 0 ){
            root ->isTerminal = false;
            return ;
        }
        // small calculation
        Trienode *child ;
        int index = word[0] - 'a';
        if(root -> children[index]  != NULL ){
            child =  root ->children[index];
        }

        else{
            return ;
        }

        removeword(child, word.substr(1));
    

        if(child ->isTerminal == false){
            for(int i = 0 ; i <26 ; i++){
                if(child ->children[i] != NULL){
                    return;
                }
            }
            delete child;
            root ->children[index] = NULL;
        
        }
    }
     void removeword(string word){
          removeword(root,word);
    }

};