#include <bits/stdc++.h> 

using namespace std;

int max(int a, int b){
  return a > b ? a : b;
};

int min(int a, int b){
  return a < b ? a : b;
};
 
int main(){
  int (*f)(int, int);
  f = max;
  cout << (*f)(1, 3) << endl;;  
  f = min;
  cout << (*f)(1, 3) << endl;;  
  return 0;
}
