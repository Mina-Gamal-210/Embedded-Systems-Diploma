// Calculating Factorial using recursion

#include <stdio.h>

void reverse(void)
{
	char c;
	scanf("%c",&c);

	if(c != '\n')
	{
		reverse();
		printf("%c",c);
	}
}


int main(void)
{

	printf("Please Enter a Sentence: ");
	fflush(stdin);
	fflush(stdout);

	reverse();


}
