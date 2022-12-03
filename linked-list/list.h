#include <iostream> 

using namespace std;

class List;

class Node {
  public:
    int data;
    Node* next;
    // initialization list
    Node(int d): data(d), next(NULL){}
    ///friend class List;
    ~Node(){
      if(next != NULL){
        delete next;
      }
    }
};


class List {
  Node* head;
  Node* tail;
  public:
    List(): head(NULL), tail(NULL){}
    Node* begin(){
      return head;
    }
    void push_front(int data){
      Node* n = new Node(data);
      if(head == NULL){
        head = tail = n;
      }else {
        n->next = head;
        head = n;
      }
    }
    void push_back(int data){
      Node* n = new Node(data);
      if(head == NULL){
        head = tail = n;
      }else {
        tail->next = n;
        tail = n;
      }
    }
};
