#include<stdio.h>

int main(){
	//Declare the variable names.
	int n;
	scanf("%d",&n);
	int a[n];					//Declare the array to store the numbers.
	int num_odd = 0;			//num_odd : Number of odd numbers in the array.
	int sum = 0;				//sum : Sum of all the numbers in the array.

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);		//Take the numbers as input.
		sum += a[i];			//Add the current element to the variable sum.
		if(a[i]&1)				//If a number is odd increase the num_odd counter by 1.
			num_odd++;
	}

	//If the sum of the entire array is odd, then the first player can remove the entire array and win.
	if(sum & 1)
		printf("First\n");
	/*	If the sum is not odd, then you will have two cases if there is a number which is odd,
		then the first player wins, otherwise the second player wins.	
	*/
	else{
		if(num_odd > 0)
			printf("First\n");
		else
			printf("Second\n");
	}
}
