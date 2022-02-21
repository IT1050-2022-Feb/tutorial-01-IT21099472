/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b,total;
  float avg;

  printf("input the 1st number: ");
  scanf("%d",&a);
puts("");
  printf("input the 2nd number: ");
  scanf("%d",&b);

  total=a+b;
  avg=total/2;

  printf("the Average of %f",avg);
  return 0;
}

