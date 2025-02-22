#include "stdio.h"

// Written by Mina Gamal
// c function to sum numbers from 1 to 100(without loop)
// i made it more general to take a range [A,B] and sum it
// There is a shortcut formula --> sum = 0.5*(A+B)*(B-A+1) but i didn't use it

int Sum_Range(int start,int end)
{
	int result=0;
	if(end == start-1)
		return 0;
	result = end + Sum_Range(start,end-1);
	return result;
}

int main()
{
	int start,end;
	while(1)
	{
		printf("Enter range to be summed: ");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&start,&end);
		printf("Sum of the range [%d,%d] = %d",start,end,Sum_Range(start,end));
		printf("\n\n");
	}
	return 0;
}
