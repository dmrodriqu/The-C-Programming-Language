#include <stdio.h>


main(){
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c =='\t' || c == '\n' || c == ' ')
            ++ nl;
    printf("%d\n", nl);
}
