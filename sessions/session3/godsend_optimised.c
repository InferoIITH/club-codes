#include<stdio.h>

int main(){
	//Declare the variable names.
	int n;
	scanf("%d",&n);
	int a;

	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		if(a & 1){
			printf("First\n");		//If there is an odd number in the array, then first player wins.
			return 0;
		}

	}

	printf("Second\n");
	return 0;
}
