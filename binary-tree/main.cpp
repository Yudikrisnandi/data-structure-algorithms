#include <bits/stdc++.h> 
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
      data = d;
      left = right = NULL;
    };
};

Node* buildTree(){
  int d; cin >> d;
  if(d == -1) return NULL;
  Node* n = new Node(d);
  n->left = buildTree();
  n->right = buildTree();
  return n;
}

void preOrderPrint(Node* root){
  if(root == NULL) return;
  cout << root->data << " ";
  preOrderPrint(root->left);
  preOrderPrint(root->right);
}

void inOrderPrint(Node* root){
  if(root == NULL) return;
  inOrderPrint(root->left);
  cout << root->data << " ";
  inOrderPrint(root->right);
}

void postOrderPrint(Node* root){
  if(root == NULL) return;
  postOrderPrint(root->left);
  postOrderPrint(root->right);
  cout << root->data << " ";
}
 
int main(){
  Node* root = buildTree();
  cout << "pre-order : ";
  preOrderPrint(root);
  cout << endl;

  cout << "in-order : ";
  inOrderPrint(root);
  cout << endl;

  cout << "post-order : ";
  postOrderPrint(root);
  cout << endl;

  return 0;
}
