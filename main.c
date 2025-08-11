#include "stdbool.h"
#include "stdio.h"

int main() {

  char name[] = "manuel bamise";
  char letter = 'g';

  printf("hello %s \n", name);
  printf("the letter after f is, %c \n", letter);

  bool isActive = true;

  if (!isActive) {
    printf("the user is currently active\n");
  } else {
    printf("sorry, the user is offline \n");
  }
  printf("%d", isActive);
  return 0;
}
