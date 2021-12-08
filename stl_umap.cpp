#include <bits/stdc++.h> 

using namespace std;

 
int main(){
  unordered_map<string, int> menu;
  menu["maggi"] = 15;
  menu["colddrink"] = 25;
  menu["dosa"] = 35;
  menu["pizza"] = 45;
  menu["hotdog"] = 55;

  // search
  string item; 
  cin >> item;

  menu.erase("dosa");

  if(menu.count(item) == 0){
    cout << item << " is not available" << endl;
  }else{
    cout << item << " is available with price " << menu[item] << endl;
  }

  // order random === unordered map
  for(pair<string, int> item:menu){
    cout << item.first << " " << item.second << endl;
  }

  // order random === unordered map
  for (auto x : menu)
      cout << x.first << " " << x.second << endl;

  return 0;
}
