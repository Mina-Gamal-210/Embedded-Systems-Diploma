// Calculate Average of array

#include <stdio.h>


int main(void)
{

	int n;
	printf("Enter the numbers of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	while(n>100 || n<=0){

		printf("Error, Enter a number in the range between 1 and 100\n");
		printf("Enter the numbers of data: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&n);
	}
	int i;
	float x[100];
	float sum = 0.0;
	float average = 0.0;



	for(i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&x[i]);
		sum += x[i];

	}

	average = sum / n;

	printf("Average = %0.3f",average);




	return 0;


}
