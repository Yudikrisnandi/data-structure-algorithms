#include <bits/stdc++.h> 

using namespace std;

 
int main(){
  int x = 10;
  cout << "print address of x " << &x << endl;
  // pointer variable 
  int *p = &x;
  cout << "print value pointer variable p " << p << endl;
  cout << "dereference operator " << *p << endl;
  cout << "print address of p " << &p << endl;
  // pointer to pointer
  int **pp = &p;
  cout << "print value of pointer to pointer pp " << pp << endl;
  cout << "print address of pointer to pointer pp " << &pp << endl;
  int *zeroptr = 0;
  int *nulptr = NULL;
  cout << zeroptr << endl;
  cout << nulptr << endl;

  //reference variable
  int a = 10;
  int b = 10; // a and b different bucket
  int &c = a; // a and c same bucket
  a++;
  cout << a << " " << c << endl;

  return 0;
}
