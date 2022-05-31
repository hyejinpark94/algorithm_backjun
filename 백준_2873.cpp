#include <iostream>
#include <cstdio>
//#include <string>

using namespace std;

int r,c;
int x,y;
int map[1001][1001];
int direction; // 1 : right , 0: left
string path;
int main() {
	scanf("%d %d", &r, &c);
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			scanf("%d", &map[i][j]);
		}
	}
	
	x = 0;
	y = 0;
	direction = 1;
	//while(x != (c-1) && y != (r-1)) {
	while(1) {
		if(direction == 1) {
			x++;
			path = path + 'R';
			if(x == (c-1)) {
				if(y == (r-1)) {
					break;
				}
				y++;
				path = path + 'D';
				direction = 0;
			}
		} else if(direction == 0) {
			x--;
			path = path + 'L';
			if(x == 0) {
				y++;
				path = path + 'D';
				direction = 1;
			}
		}
	} 
	
	cout << path << "\n";
	
	return 0;
}
