#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void) {
	int n;
	int a[10001] = {0,};
	int c[10001] = {0,};
	int sum = 0;
	
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	
	sort(a, a+n);
	
	for(int i=n-1;i>0;i--) {
		if(a[i] * a[i-1] > 0) {
			c[i] = 1;
			c[i-1] = 1;
			sum += (a[i] * a[i-1]);
			i--;
		} else {
			c[i] = 1;
			sum += a[i];
		}
	}
	
	for(int i=0;i<n;i++) {
		if(c[i] == 0) {
			sum = sum + (a[i]);
		}
	}
	
	cout << sum << "\n";
	return 0;
}
