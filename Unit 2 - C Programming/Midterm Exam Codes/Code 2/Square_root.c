#include "stdio.h"
#include "math.h"

//Written by Mina Gamal
//c function to take an integer number and calculate it's square root

float Square_root(int number)
{
	if(number<0)
		{
		printf("Error, Please enter a valid number >= 0\n");
		return -1;
		}

	else
	return sqrt(number);
}

int main()
{
	int number;
	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		float result = Square_root(number);
		printf("Square root of %d = %0.3f",number,result);
		printf("\n\n");

	}
	return 0;
}
