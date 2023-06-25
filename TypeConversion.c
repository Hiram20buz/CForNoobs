#include <stdio.h>

int main() {
  float price = 6.50;
  int increase = 2;
  float new_price;

  new_price = price + increase;
  printf("New price is %4.2f", new_price);
  /* Output: New price is 8.50 */

  float average;
  int total = 23;
  int count = 4;

  average = (float) total / count;
  /* average = 5.75 */
  printf("The average is %4.2f", average);

  return 0;
}
