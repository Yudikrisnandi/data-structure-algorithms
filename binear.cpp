#include <bits/stdc++.h> 

using namespace std;

int getIthBit(int n, int i){
  int mask = (1<<i);
  cout << (n & mask) << endl;
  return (n & mask) > 0 ? 1 : 0;
}

 
int main(){
  // left shift -> multification
  // ex : 5 << 2
  // original 5 : 0 0 0 0 1 0 1 -> 0 0 1 0 1 0 0
  //              X X - - - - - -> - - - - - + + -->x(remove), +(add)
  // a << b = a * 2^b
  cout << (5 << 2) << endl;
  // 5 << 2 = 5 * 2^2 = 20

  // right shift -> divides
  // ex : 10 >> 1
  // original 10 : 0 0 1 0 1 0  -> 0 0 0 0 1 0 1 
  //               - - - - - X  -> + - - - - - - -->x(remove), +(add)
  // a << b = a / 2^b
  cout << (10 >> 1) << endl;
  // 5 << 2 = 5 * 2^2 = 20

  // check number is even or odd
  // last bit = 1, odd
  // last bit = 0, even 
  // using & 1
  // ex: 10 = 001010  
  //     1  = 000001
  //     res= 000001
  //int a; cin >> a;
  //cout << (a & 1) << endl;
  int a = 10;
  if(a & 1){
    cout << "odd" << endl;
  }else{
    cout << "event" << endl;
  }

  // get i th bit
  // ex: 5 -> 000101 -> getbit i where = 1
  //          000100 -> using 1 split left by i 
  cout << getIthBit(5, 2) << endl; 
  return 0;
}
