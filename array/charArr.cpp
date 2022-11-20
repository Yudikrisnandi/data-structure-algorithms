#include <bits/stdc++.h> 

using namespace std;

 
int main(){

  // initialisation char array -> termination by null char
  char a[100] = {'a', 'b', 'c', '\0'};
  // automatically terminate
  char b[100] = "abc";

  cout << a << endl;
  cout << b << endl;

  cout << strlen(a) << endl; // number of character
  cout << sizeof(a) << endl;

  //cin char
  //char c[100]; cin >> c; cout << c << endl; 

  //get.cin()
  char d[100];
  //input buffer
  char temp = cin.get();

  int i = 1;
  while(temp != '\n'){
    i++;
    cout << temp;
    temp = cin.get();
  }

  return 0;
}
