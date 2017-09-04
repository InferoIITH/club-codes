#include <stdio.h>
int main(){
	int t,x,y,ex,ey;
	scanf("%d%d%d%d%d", &t, &x, &y, &ex, &ey);
	char c[100010];
	scanf("%s", &c);

	//If starting point is same as ending point.
	if(x==ex && y==ey){
		printf("%d\n", 0);
		return 0;
	}

	//Read string one charecter at a time and sail if it results in moving closer to the ending point.
	for(int i = 0; i < t; i++){
		int x1 = ex-x;
		int y1 = ey-y;
		if(c[i]=='N' && y1>0){
			y++;
		}
		if(c[i]=='S' && y1<0){
			y--;
		}
		if(c[i]=='E' && x1>0){
			x++;
		}
		if(c[i]=='W' && x1 <0){
			x--;
		}

		//If the ending point is reached display the current (index+1) : Value of t.
		if(x==ex && y==ey){
			printf("%d\n", i+1);
			return 0;
		}
	}

	//If it's not possible to reach the ending point, print -1.
	printf("-1\n");
	return 0;
}