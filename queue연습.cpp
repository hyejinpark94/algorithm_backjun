#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	queue<int> q;
	q.push(1);
	q.push(2);
	q.pop();
	q.push(4);
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
