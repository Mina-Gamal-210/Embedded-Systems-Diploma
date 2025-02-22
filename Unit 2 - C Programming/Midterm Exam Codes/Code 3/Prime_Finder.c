#include "stdio.h"

// Written by Mina Gamal
// c function to print all prime numbers between two numbers
// Note: I didn't use is_prime() function

void Prime_Finder(int start, int end)
{
	if( start>end || start<0 )
		printf("Error,Please enter a valid range");

	else
	{
		int i,j;
		printf("\nPrime Numbers in the range[%d,%d]: ",start,end);
		for(i=start;i<=end;i++)
		{
			if(i==1)
			{
				printf("%d ",i);
				continue;
			}

			for(j=i-1;j>1;j--)
			{
				if(i%j==0)
					break;
			}
			if(j==1)
				printf("%d ",i);
		}

	}
}

int main()
{
	int start,end;
	printf("Please Enter the range: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&start,&end);
	Prime_Finder(start,end);

	return 0;
}
