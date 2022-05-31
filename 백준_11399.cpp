#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	int sum = 0;
	int p[1001] = { 0, };
	int l[1001] = { 0, };
		
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		scanf("%d", &p[i]);
	}
	
	sort(p, p+n+1);
	
	for(int i=1;i<=n;i++) {
		l[i] = p[i] + l[i-1];
	}
	
	for(int i=1;i<=n;i++) {
		sum += l[i];
	}
	
	cout << sum << "\n";
	return 0;
}
