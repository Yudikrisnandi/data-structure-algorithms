#include <bits/stdc++.h> 
#include "list.h"

using namespace std;

int main(){
  List l;
  l.push_front(1);
  l.push_front(4);
  l.push_front(6);
  l.push_back(2);
  
  Node* head = l.begin();

  while(head != NULL){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl ;
  return 0;
}
