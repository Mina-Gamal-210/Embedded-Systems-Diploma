// Printing the transpose of a matrix

#include <stdio.h>


int main(void)
{

	int r, c, i, j;
	float a[10][10];
	printf("Please enter the Number of Rows: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&r);
	printf("Please enter the Number of Columns: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c);

	printf("\nPlease enter the matrix elements:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("\nEntered Matrix:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%0.2f\t",a[i][j]);

		}
		printf("\n");
	}


	printf("\nMatrix Transpose:\n");

	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%0.2f\t",a[j][i]);

		}
		printf("\n");
	}



	return 0;


}
