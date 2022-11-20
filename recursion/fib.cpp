#include <bits/stdc++.h>

using namespace std;

int fib(int n){
  if(n==0 or n== 1){
    return n;
  }
  int f1 = fib(n-1);
  int f2 = fib(n-2);
  return f1 + f2;
}

int main(){
  // 0 1 1 2 3 5 8 13
  int n;
  cin >> n;
  int res = fib(n);
  cout << res << endl;
  return 0;
}
