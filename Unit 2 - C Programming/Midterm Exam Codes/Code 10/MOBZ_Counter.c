#include "stdio.h"
#include "math.h"

// Written by Mina Gamal
// c function to count the max number of ones between two zeros in binary

int MOBZ_Counter(int number)
{

	int c=0,i,j,arr[33],max=0;
	int n_bits = ceil(log2(number+1))+1;

	for(i=0;i<n_bits;i++)
	{
		arr[i]=(number>>i)&1;
	}


	for(i=0;i<34&&arr[i]==0;i++)
	{
		j=i+1;
		while(arr[j])
		{
			c++;
			j++;
		}
		if(arr[j]==0)
			max = c>max? c:max;


	}
	return max;
}

int main()
{
	int number;
	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		printf("Max number of ones between two zeros = %d",MOBZ_Counter(number));
		printf("\n\n");
	}
	return 0;
}
