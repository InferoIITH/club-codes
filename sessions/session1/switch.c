#include<stdio.h>

int main(){
	char grade;
	printf("Enter your grade (amongst A, B, C and F): \n");
	scanf("%c", &grade);
	switch(grade){
		case 'A': 	printf("Your marks are 30.\n");
					break;
		case 'B': 	printf("Your marks are between 21 and 29.\n");
					break;
		case 'C': 	printf("Your marks are between 11 and 20.\n");
					break;
		case 'F': 	printf("Your marks are between 0 and 10.\n");
					break;
		default: 	printf("See the instructions :P\n"); 
	}	
	return 0;				
}
