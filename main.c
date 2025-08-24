#include <math.h>
#include <stdio.h>
#define AMOUNTOFCHAR 9
// #define OUT 0

int main() {
  int nums[AMOUNTOFCHAR];
  int input;

  for (int i = 0; i < AMOUNTOFCHAR; ++i) {

    printf("Put in a new number\n");
    scanf("%d", &input);

    nums[i] = input;
  }

  printf("the result\n");
  for (int i = 0; i < AMOUNTOFCHAR; ++i) {
    printf("%d \n", nums[i]);
  }

  return 0;
}
