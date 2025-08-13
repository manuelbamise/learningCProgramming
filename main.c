#include "stdbool.h"
#include "stdio.h"
#include "string.h"

int main() {

  char product[45];
  float price;
  int productNumber;
  float totalAmount;

  printf("What do you want to purchase: ");
  fgets(product, strlen(product), stdin);

  printf("How many?: ");
  scanf("%d", &productNumber);

  printf("how much is per product?: ");
  scanf("%f", &price);

  totalAmount = price * productNumber;

  printf("You purchased %d %s's and the total amount is %f", productNumber,
         product, totalAmount);

  return 0;
}
