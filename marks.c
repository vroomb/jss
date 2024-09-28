#include <stdio.h>

int main() {
  int s1, s2, s3, s4, s5, sum;
  float per;
  printf("Enter Marks for 5 subjects:\n");
  scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
  sum = s1 + s2+ s3+ s4+ s5;
  per = sum/5;

  printf("sum is: %d\n", sum);
  printf("percentage is: %d\n", per);
  return 0;
}
