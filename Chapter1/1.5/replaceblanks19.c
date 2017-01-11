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
      }
      else{
        putchar(c);
      }
    }
    printf("%d\n", c);
}
