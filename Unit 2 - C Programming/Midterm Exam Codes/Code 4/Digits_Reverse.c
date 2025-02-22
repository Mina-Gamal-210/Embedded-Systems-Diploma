#include "stdio.h"
#include "math.h"

// Written by Mina Gamal
/* c function to reverse digits in a number
   and return it not only printing the digits */

int Digits_Reverse(int number)
{
	int a[10],i,d=0,sum=0;
	for(i=0;number;i++)
	{
		a[i]=number%10;
		number/=10;
	}

	while(i--)
		sum+=a[d++]* pow(10,i);
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
		printf("Reverse Number: %d",Digits_Reverse(number));
		printf("\n\n");
	}

	return 0;
}
