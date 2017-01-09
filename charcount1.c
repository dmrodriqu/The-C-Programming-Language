#include <stdio.h>

/* count char in input*/

int main()
{
	double nc;
	for (nc = 0; (getchar() != EOF); ++nc);
	printf("%f\n", nc);
	return 0;
}
