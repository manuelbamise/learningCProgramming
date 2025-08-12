#include "stdbool.h"
#include "stdio.h"

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

  printf("int: %d \n", age);
  printf("float: %f \n", gpa);
  printf("char: %c \n", grade);
  printf("string: %s \n", name);

  return 0;
}
