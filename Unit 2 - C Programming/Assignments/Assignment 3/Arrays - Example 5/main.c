// Searching an element in array

#include <stdio.h>


int main(void)
{

	int i, n, x, Location, flag = 0;
	int a[100];
	again:
	printf("Enter number of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if(n > 100 || n<=0){
		printf("Error, please enter a number between 1 and 100\n");
		goto again;
	}

	for(i=1; i<=n;i++){
		a[i-1] = i*11;
		printf("%d ",a[i-1]);
	}

	printf("\nEnter the element to be Searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);



	for(i=0; i<n ;i++)
	{
		if(a[i] == x)
		{
			Location = i+1;
			flag = 1;
			break;
		}

	}

	if(flag == 1)
	{
		printf("Number found at location %d",Location );
	}

	else
		printf("This number doesn't exist in this array");



	return 0;


}
