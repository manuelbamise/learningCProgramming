#include <math.h>
#include <stdio.h>

int main() {
  /* program to print the farenheit table
    and the celcius equivalent*/

  int fahr;

  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%d %.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  return 0;
}
