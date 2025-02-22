#include "stdio.h"
#include "math.h"

// Written by Mina Gamal
//c function to count number of ones in binary number

int Binary_ones_Counter(int number)
{
	int c=0,i;
	int n_bits = ceil( log2(number+1) );

	for(i=0;i<n_bits;i++)
	{
		if(((number>>i)&1)==1)
			c++;
	}
	return c;
}

int main()
{
	int number;
	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		printf("Binary of %d has %d one's ",number,Binary_ones_Counter(number));
		printf("\n\n");
	}

	return 0;
}
