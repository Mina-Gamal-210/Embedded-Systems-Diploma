// Summation of two Matrices

#include <stdio.h>


int main(void)
{
	float a[2][2];
	float b[2][2];
	float z[2][2];
	int i, j;

	printf("Enter the Elements of the 1st matrix: \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("\nEnter the Elements of the 2nd matrix: \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}

	printf("\nThe sum of the two matrices:\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			z[i][j]= a[i][j] + b[i][j];
			printf("%0.2f\t", z[i][j]);
		}
		printf("\n");
	}


	return 0;


}
