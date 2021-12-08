#include <bits/stdc++.h> 

using namespace std;

bool compare(int a, int b){
  return a < b;
}


 
int main(){
  // lifo
  vector<int> v= {100, 2, 5, 1, 14, 7, 12, 99};

  //sort(v.begin(), v.end());
  //sort(v.begin(), v.end(), compare);

  //lamda function
  //sort(v.begin(), v.end(), [](int a, int b){ return a < b; });
  auto cmp = [](int a, int b){return a < b;};
  sort(v.begin(), v.end(), cmp);

  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  
  return 0;
}
