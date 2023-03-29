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

Node* levelOrderBuildTree(){
  int d; cin >> d;
  Node* root = new Node(d);

  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node* current = q.front();
    q.pop();

    int c1, c2; 
    cin >> c1 >> c2;

    if(c1 != -1){
      current->left = new Node(c1);
      q.push(current->left);
    }

    if(c2 != -1){
      current->right = new Node(c2);
      q.push(current->right);
    }
  }
  return root;
}

void levelOrderPrint(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  
  while(!q.empty()){
    Node* temp = q.front();
    if(temp == NULL){
      cout << endl;
      q.pop();
      if(!q.empty()) {
        q.push(NULL); 
      }
    }else{
      q.pop();
      cout << temp->data << " ";
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
    }
  }
}

int heightTree(Node* root){
  if(root == NULL){
    return 0;
  }
  int h1 = heightTree(root->left);
  int h2 = heightTree(root->right);
  return 1 + max(h1,h2);
}

 
int main(){
  Node* root = levelOrderBuildTree();
  levelOrderPrint(root);
  cout << endl;
  cout << heightTree(root) << endl;
  return 0;
}
