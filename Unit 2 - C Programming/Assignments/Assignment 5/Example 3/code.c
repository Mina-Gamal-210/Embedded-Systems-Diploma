/*Assignment 5*/

// Example 3: Adding two complex numbers using Structures and Arrays

#include <stdio.h>


struct complex
{
	float real;
	float im;

};



struct complex scan_comp(char str[])

{
	struct complex s;
	printf("For %s complex number\nEnter Real and Imaginary part respectively: ",str);
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&s.real,&s.im);

	return s;
}


struct complex Add_comp(struct complex n1 , struct complex n2)

{
	n1.real += n2.real;
	n1.im += n2.im;

	return n1;
}




int main(void)
{

	struct complex x,y,z;

	x = scan_comp("1st");
	printf("\n");
	y = scan_comp("2nd");

	z = Add_comp(x,y);
	printf("\nSum = %g + %g i",z.real,z.im);

	return 0;
}
