#include <stdio.h>

/*a more consice version*/

int main()
{
	double nc;
	/*long vs double
	double allows for greater/larger values*/
    for(nc=0; getchar() != EOF; ++nc)
        ;
    /*body of loop empty, all work done in test,
    increment*/

    printf("%.0f\n", nc);
    /* %.0 keeps decimal and fraction from printing */
}
