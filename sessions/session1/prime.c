#include<stdio.h>

int check_prime(int number){
	int is_prime = 1;
	for(int i = 2; i*i <= number; i++){
		if(number % i == 0){
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
int main(){
	int number;
	printf("Enter a number: \n");
	scanf("%d", &number);
	
	if(check_prime(number) == 1)
		printf("%d is a prime\n", number);
	else
		printf("%d is not a prime\n", number);

	return 0;			
}
