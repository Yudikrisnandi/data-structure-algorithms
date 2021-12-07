#include <bits/stdc++.h> 

using namespace std;

 
int main(){
  // fifo
  queue<string> books;

  books.push("c++");
  books.push("javascript");
  books.push("python");
  books.push("os");
  
  while(!books.empty()){
    cout << books.front() << " ";
    books.pop();
  }
  return 0;
}
