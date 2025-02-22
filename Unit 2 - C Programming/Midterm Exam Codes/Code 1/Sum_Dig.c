#include "stdio.h"

//Written by Mina Gamal
//c function to take a number and sum all digits

int Sum_Dig(int number)
{
	int sum =0,d;
	while(number)
	{
		d=number%10;
		sum+=d;
		number/=10;
	}
	return sum;
}



int main()
{
	int number;
	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		int sum = Sum_Dig(number);
		printf("Sum of digits = %d",sum);
		printf("\n\n");

	}
	return 0;
}
