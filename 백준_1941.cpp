#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int > a, pair<int, int > b) {
  if(a.second == b.second) {
  	return a.first < b.first;
  } else {
  	return a.second < b.second;
  }
}

int main() {

  int n;
  int cnt = 0; 
  int start, end;
  vector<pair<int, int > > v;

  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> start >> end;
    v.push_back(pair<int, int >(start, end));
  }
  
  sort(v.begin(), v.end(), compare);
  
  start = 0;
  for(int i=0;i<v.size();i++) {
  	if(start > v[i].first) {
  		continue;
	} 	
  	start = v[i].second;
  	cnt++; 
  }
  
  cout << cnt << "\n";
  
  return 0;
}
