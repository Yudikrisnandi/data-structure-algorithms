#include <bits/stdc++.h> 

using namespace std;

 
int main(){
  // sequence containers: array, vector, deque, forward-list, list 
  // associate containers: set, map, multiset, multimap
  // unordered associative: unordered set, unordered map, unordered multiset, unordered multimap
  // containers adaptor: stack, queue, priority queue

  //set
  set<string> fruits = {"apple", "mango", "banana", "guava", "apple"};

  fruits.insert("chery");
  fruits.insert("papaya");

  for(set<string>::iterator it = fruits.begin(); it != fruits.end(); it++){
    cout << *it << endl;
  }

  //common use algorithms 
  //search, binary search, upper & lower bound, next permutation, pair class, string class

  //search
  int arr[] = {1, 10, 11, 9, 100};
  int n = sizeof(arr) / sizeof(int);

  int key = 10;
  auto it = find(arr, arr + n, key);
  int index = it - arr;

  if(index == n){
    cout << key << " not present" << endl; 
  }else{
    cout << "Position " << index << endl;;
  }

  //binary search | lower bound | upper bound
  int a[] = {20, 30, 40, 40, 40, 50, 60, 70, 100};
  int size = sizeof(a) / sizeof(int);
  int item = 40;

  bool isPresent = binary_search(a, a+size, item);

  if(isPresent){
    cout << "present" << endl;
  }else{
    cout << "not present"<< endl;
  }

  auto lb = lower_bound(a, a+size, item);
  cout << "lower bound 40 is " << lb-a << endl;

  auto ub = upper_bound(a, a+size, item);
  cout << "upper bound 40 is " << ub-a << endl;

  // search frequensi
  cout << "freq of " << item << " is " << (ub-lb) << endl;

  // lamda function

  return 0;
}
