#include "stdbool.h"
#include "stdio.h"
#include "string.h"

int main() {

  int age;
  float gpa;
  char grade;
  char name[30];

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your GPA: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  getchar();
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("string: %s \n", name);
  printf("int: %d \n", age);
  printf("float: %f \n", gpa);
  printf("char: %c \n", grade);

  return 0;
}
