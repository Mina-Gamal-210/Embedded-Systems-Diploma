#include <stdio.h>

int main()
{
  char word[100];
  char* p = word;

  printf("Enter a string: ");
  fflush(stdin);fflush(stdout);
  gets(word);

  int i =0;


  while(p[i]!=0){
	  i++;
  }

  i--;

  while(i>=0){
	  printf("%c",*(p+i));
	  i--;
  }

	return 0;
}
