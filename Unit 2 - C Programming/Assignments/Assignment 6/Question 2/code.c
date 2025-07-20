#include <stdio.h>

int main()
{
  char c = 'A';
  char* pc = &c;
  int i;

  for(i=0;i<=('Z'-'A');i++)
  {

	  printf("%c ",(*pc)++);

  }

	return 0;
}
