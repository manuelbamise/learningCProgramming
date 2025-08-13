#include "stdbool.h"
#include "stdio.h"
#include "string.h"

int main() {
  // Mad libs game in C
  char noun[50] = "";
  char verb[50] = "";
  char adjective1[50] = "";
  char adjective2[50] = "";
  char adjective3[50] = "";

  printf("Enter an adjective(description): ");
  fgets(adjective1, sizeof(adjective1), stdin);
  adjective1[strlen(adjective1) - 1] = '\0';

  printf("Enter a noun(name, animal, place): ");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) - 1] = '\0';

  printf("Enter an adjective(description): ");
  fgets(adjective2, sizeof(adjective2), stdin);
  adjective2[strlen(adjective2) - 1] = '\0';

  printf("Enter a verb(ending w/ -ing): ");
  fgets(verb, sizeof(verb), stdin);
  verb[strlen(verb - 1)] = '\0';

  printf("Enter an adjective(description): ");
  fgets(adjective3, sizeof(adjective3), stdin);
  adjective3[strlen(adjective3 - 1)] = '\0';

  printf("\n Today i tried taking to %s people on the street.\n I thought i "
         "was %s them.",
         adjective1, verb);
  printf("Instead all i was met with was a %s response. \n", adjective2);
  printf("Oh well, at least i can enjoy my %s drink with %s. \n", adjective3,
         noun);

  return 0;
}
