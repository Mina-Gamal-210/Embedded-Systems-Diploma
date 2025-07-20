#include <stdio.h>

int main()
{
	int m=29;
	int* ab = &m;


	printf(" Address of m : %p\n", &m);
	printf(" Value of m : %d\n\n", m);


	printf(" ab is assigned with the address of m.\n\n");
	printf(" Address inside pointer ab : %p\n", ab);
	printf(" *ab : %d\n\n", *ab);

	m = 34;
	printf(" The value of m assigned to 34 now.\n\n");
	printf(" Address inside pointer ab : %p\n", ab);
	printf(" *ab : %d\n\n", *ab);

	*ab = 7;
	printf(" *ab is assigned the value 7 now.\n\n");
	printf(" Address of m : %p\n", &m);
	printf(" Value of m : %d\n\n", m);

	return 0;
}
