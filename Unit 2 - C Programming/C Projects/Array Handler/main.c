#include <stdio.h>


int Arr_Scan(int x[])
{
	int n,i;
	printf("Enter the number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Element %d = ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",x+i);
	}
	printf("Scan is done ^_^\n\n");
	return n;

}

void Arr_Print(int x[],int n)
{
	int i;
	printf("Array >> { ");
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
		if(i==n-1);
		else
			printf(", ");


	}
	printf(" }\n");
	printf("Print is done ^_^\n\n");

}



void Arr_Reverse(int x[],int n)
{
	int i,t;
	int c = n/2;

	for(i=0;i<c;i++)
	{
		t = x[i];
		x[i]=x[n-1-i];
		x[n-1-i]=t;
	}

}


int main()
{
	int x[10];
	int n = Arr_Scan(x);   //Arr_Scan() will return number of Elements which the user entered
	Arr_Print(x,n);
	Arr_Reverse(x,n);
	Arr_Print(x,n);

	return 0;
}


