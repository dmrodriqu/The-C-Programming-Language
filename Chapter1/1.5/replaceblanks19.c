#include <stdio.h>


/*write a program to copy its input to
its output, replacing each string of one
or more blanks by a single blank*/

int main(){
    int c, prevc;
    while ((c = getchar()) != EOF){
      if (c ==' '){
        if (prevc != ' '){
          putchar(c);
        }
/*|   |  c c c c - - - - c c
  | c |  0 1 2 3 4 5 6 7 8 9
  | p |  n 0 1 2 3 4 5 6 7 8
c is set first, proceeds through loop
then prevc set. second time, prevc has val
so comparison available. if nonblank char
second if statement, no comparison needed.
if blank statement, comparison needed.
*/
      }
      if (c != ' '){
        putchar(c);
      }
      prevc = c;
    }
}
