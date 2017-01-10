#include <stdio.h>
/* structure of this program
   read char
   while (char not end of file indicator)
       output char read
       read char */
/* copy input to output */
int main(){
  

  
  /* need to set c to a type large enough to store
  char and EOF signal. char only large enough for
  char, but not large for char AND EOF. int can store
  char, but is also large enough for char AND int. char
  are bit patterns */
  
  int c;
      
      /*c = getchar()
      is an assignment and holds a value.
      c holds a value after assignment of getchar()
      the assignment can appear as part of a larger expression
      such as the while loop below*/
	while ((c = getchar()) != EOF){  /* EOF defined in stdio*/
      putchar(c);
      printf("%d\n", c);
      
      /* (=) vs !=
         != takes precidence over =
         if no parentheses != would be done before
         var c assignment*/
	}
}