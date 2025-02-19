// Calculating Factorial using recursion

#include <stdio.h>

int factorial(int a)
{
	static int product = 1;
	if(a == 0)
		return 1;
	else if(a<0)
		return 0;    // can be used as a flag for invalid input
	else
	{
		product *= a--;
		if(a > 1)
			factorial(a);
		else
			return product;
	}
}


int main(void)
{
	int x,result;

	printf("Enter a positive number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	result = factorial(x);
	printf("Factorial of %d = %d",x,result);


}
