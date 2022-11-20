#include <bits/stdc++.h> 

using namespace std;

 
int main(){
  // lifo
  stack<string> books;

  books.push("c++");
  books.push("javascript");
  books.push("python");
  books.push("os");
  
  while(!books.empty()){
    cout << books.top() << " ";
    books.pop();
  }
  return 0;
}
