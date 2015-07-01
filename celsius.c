#include <stdio.h>

/* rpint Fahrenheit-Celsius table
   for fahr = 0, 20, ...., 300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;    /* lower limit of temperature table */
  upper = 150;  /* upper limit */
  step = 12;    /* step size */

  celsius = lower;

  printf("cel     fahr\n");

  while (celsius <= upper){
    fahr = (celsius*9.0/5.0) + 31.0;
    printf("%4.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
