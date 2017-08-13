#include<stdio.h>

int main(){
	int a,b;

	//Normal pattern
	for(a = 1; a <= 10; a++){
		for(b = 1; b <= a; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//Reverse pattern
	for(a = 10; a >= 1; a--){
		for(b = 1; b <= a; b++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}