#include <iostream>
using namespace std;
int main(){
	int t,x,y,ex,ey;
	cin >> t >> x >> y >> ex >> ey;
	if(x==ex && y==ey){
		cout << 0 << endl;
		return 0;
	}
	for(int i = 0; i < t; i++){
		char c;
		cin >> c;
		int x1 = ex-x;
		int y1 = ey-y;
		if(c=='N' && y1>0){
			y++;
		}
		if(c=='S' && y1<0){
			y--;
		}
		if(c=='E' && x1>0){
			x++;
		}
		if(c=='W' && x1 <0){
			x--;
		}
		if(x==ex && y==ey){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}