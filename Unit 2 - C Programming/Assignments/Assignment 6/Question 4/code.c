#include <stdio.h>

int main()
{
	int arr[50];
	int n,i;
	int *p = arr;

	printf("Enter Number of the Elements in the array (Max is 50): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	printf("Scanning the Elements: \n");
	for(i=0;i<n;i++){

		printf("Enter Element %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",p+i);
	}

	printf("\nPrinting the Array in reverse order: \n");
	printf("--> {");

	for(i=n-1;i>=0;i--){

			printf("%d",*(p+i));

			if(i!=0)
				printf(",");
		}

	printf("}");
	return 0;
}
