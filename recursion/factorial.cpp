#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  int ans = n * factorial(n-1);
  return ans;
}

int main(){
  int n = 5;
  int res = factorial(n);
  cout << res << endl;
  return 0;
}
