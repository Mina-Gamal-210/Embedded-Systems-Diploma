// Frequency of a case sensitive character in a string

#include <stdio.h>
#include <string.h>


int main(void)
{

	int i, count = 0;
	char x;

	char text[150];

	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);
	printf("Enter a case sensitive character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);

	for(i=0;i<strlen(text);i++){

		if(text[i]==x)
		{
			count++;
		}
	}

	printf("frequency of %c: %d", x, count);




	return 0;


}
