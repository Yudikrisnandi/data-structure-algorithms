#include <bits/stdc++.h> 

using namespace std;

 
int main(){

  deque<int> first; // empty deque of ints
  deque<int> second(4, 100); // four ints with value 100
  deque<int> third(second.begin(), second.end()); // iterating through second
  deque<int> fourth(third); // a copy of third

  int myInts[] = {16, 2, 77, 29};
  int n = sizeof(myInts) / sizeof(int);

  deque<int> fifth(myInts, myInts + n);

  // method deque 
  // push_back, push_front, pop_back, pop_front
  
  deque<int> de;
  de.push_back(1);
  de.push_back(3);
  de.push_back(4);
  de.pop_back();
  de.push_front(5);
  cout << de.front() << endl; 
  cout << de.back() << endl;

  for(auto x: de){
    cout << x << " ";
  }

  cout << endl;

  return 0;
}
