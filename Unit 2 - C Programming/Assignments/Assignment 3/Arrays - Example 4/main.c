// Insertion and shifting elements of an array

#include <stdio.h>


int main(void)
{

	int i, n, L, x;
	int a[101];
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
		a[i-1] = i;
		printf("%d ",i);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);

	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&L);

	for(i=n-L+1; i >= L-1 ;i--)
	{
		a[i+1] = a[i];
	}

	a[L-1] = x;

	for(i=0; i<n+1;i++){

		printf("%d ",a[i]);
	}


	return 0;


}
