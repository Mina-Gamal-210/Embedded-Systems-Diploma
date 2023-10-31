// finding prime numbers within a given range

#include <stdio.h>




void find_prime(int a , int b)
{
	int j;
	for(j=a;j<=b;j++)
	{
		if(is_prime(j) == 1)
			printf("%d  ",j);

	}
}

int is_prime(int k)
{
	int i;
	for(i=k-1;i>1;i--)
	{
		if(k%i ==0)
			return 0;

	}

	return 1;
}

int main(void)
{
	int x,y;

	printf("Enter Interval Limits (start End): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("prime numbers between %d and %d are: ",x,y);

	find_prime(x,y);

}
