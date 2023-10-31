// Calculating the power of a number using recursion

#include <stdio.h>

int power(int a, int n)
{
	static int z = 1;

	if (n == 0)
		return 1;

	if(n>0)
	{
		z *= a;
		power(a,n-1);

	}
	return z;

}


int main(void)
{
	int x, p,result;
	printf("Enter a base number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number (positive integer): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p);


	result = power(x,p);
	printf("%d^%d = %d",x,p,result);


}
