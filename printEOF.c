#include <stdio.h>

/* copy input to output; 1st version */
main()
{
  int c,d;
  
  while ((c = getchar()) != EOF){
    putchar(c);
  }

  printf("%d\n",c);
}
