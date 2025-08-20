#include <math.h>
#include <stdio.h>

int main() {
  /* program to print the farenheit table
   * and the celcius equivalent*/
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Table showing farenheit against celcius \n");
  printf("farenheit \t celcius\n");
  while (fahr <= upper) {
    celcius = 5 * (fahr - 32) / 9;
    // printf("%d \n", celcius);
    printf("%.0f \t %.1f \n", fahr, celcius);
    fahr += step;
  }

  celcius = lower;
  printf("Table showing celcius to farenheit \n");
  printf("celcius \t farenheit\n");
  while (celcius <= upper) {
    fahr = 32 + (9 * celcius) / 5;
    printf("%.1f \t %.0f \n", celcius, fahr);
    celcius += step;
  }

  return 0;
}
