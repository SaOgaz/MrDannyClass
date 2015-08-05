#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP  20    /* step size */

double convert(int temp);

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ...., 300 */

main()
{
  int fahr;

  printf("fahr     cel\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
    printf("%3d %6.1f\n", fahr, convert(fahr));
  }  
  return 0;   
}


/*convert fahr to celsius*/
double convert(int temp){
  return ((5.0/9.0)*(temp-32));
}
