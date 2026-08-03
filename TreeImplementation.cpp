#include<iostream>
using namespace std;
#include <vector>

struct TreeNode{
  int data;
  vector <TreeNode*> children;
};
TreeNode* getNewNode(int value){
  TreeNode* newNode = new TreeNode();
  newNode->data = value;
}

void addChild(TreeNode* node,int value){
  TreeNode* newNode = getNewNode(value);
  node->children.push_back(newNode);
}

void displayTree(TreeNode* root){
  cout<<root->data<<endl;
  cout<<root->children[1]->data<<endl;
  cout<<root->children[1]->children[1]->data<<endl;
}


int main(){
  //Defining Root Pointer
  TreeNode* root = getNewNode(10);
  // Adding children to root
  addChild(root,20);                //root-> 20,30
  addChild(root,30);
  //Adding children to the child of Root Nod
  addChild(root->children[0],18);
  addChild(root->children[0],9);
  addChild(root->children[0],11);

  addChild(root->children[1],0);
  addChild(root->children[1],1);
  addChild(root->children[1],2);

  displayTree(root);
 
  return 0;
}