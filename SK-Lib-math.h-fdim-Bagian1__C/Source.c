#include <stdio.h>      /* printf */
#include <math.h>       /* fdim */

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("fdim (2.0, 1.0) = %f\n", fdim(2.0, 1.0));
	printf("fdim (1.0, 2.0) = %f\n", fdim(1.0, 2.0));
	printf("fdim (-2.0, -1.0) = %f\n", fdim(-2.0, -1.0));
	printf("fdim (-1.0, -2.0) = %f\n", fdim(-1.0, -2.0));

	_getch();
	return 0;
}