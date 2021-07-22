#include<iostream>
#include <queue>
using namespace std;
#include "binarytree.h"

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

BinaryTree<int>* takeinputlevelwise(){
    int rootdata;
    cout << "Enter data" << "\n";
    cin>> rootdata;
    if(rootdata ==-1){
        return NULL;
    }
    BinaryTree<int>* root = new BinaryTree<int>(rootdata); 

    // queue for root
    queue<BinaryTree<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
         BinaryTree<int>* front = pendingNodes.front();
         pendingNodes.pop();
         //left child
         cout <<"enter left child of  " << front->data <<"\n";
         int leftchilddata;
         cin>> leftchilddata;
         if(leftchilddata != -1){
         BinaryTree<int>* child = new BinaryTree<int>(leftchilddata);
         front->left = child;
         pendingNodes.push(child);
         }

         cout <<"enter right child of  " << front->data <<"\n";
         int rightchilddata;
         cin>> rightchilddata;
         if(rightchilddata != -1){
         BinaryTree<int>* child = new BinaryTree<int>(rightchilddata);
         front->right = child;
         pendingNodes.push(child);
         }
}

return root;

}

void printtree(BinaryTree<int>* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " : ";
    if(root->left){
        cout << "L " << root->left->data << " ";
    }
    if(root->right){
        cout << "R " << root->right->data ;
    }
    cout << "\n";
    printtree(root->left);
    printtree(root->right);
}

int numNodes(BinaryTree<int>*root){
    if(root == NULL){
        return 0;
    }
    return 1 + numNodes(root->left) + numNodes(root->right);
}


int main(){
    //BinaryTree<int>* root = new BinaryTree<int>(1);
    //BinaryTree<int>* node1 = new BinaryTree<int>(2);
    //BinaryTree<int>* node2 = new BinaryTree<int>(3);
    
    //root ->left = node1;
    //root ->right = node2;
    BinaryTree<int>* root = takeinputlevelwise();
   printtree(root);
   cout << "NUM : " << numNodes(root) << "\n";
    
    delete root;

}