#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("Result of bitwise AND: %d\n",a&1);
	if(a&1)
		printf("Odd\n");
	else
		printf("Even\n");
}
/*
100
Result of bitwise AND: 0
Even

101
Result of bitwise AND: 1
Odd
*/