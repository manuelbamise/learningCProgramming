#include <math.h>
#include <stdio.h>

int main() {
  /* program to print the farenheit table
   * and the celcius equivalent*/
  int fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celcius = 5 * (fahr - 32) / 9;
    // printf("%d \n", celcius);
    printf("%d \t %d \n", fahr, celcius);
    fahr += step;
  }
  return 0;
}
