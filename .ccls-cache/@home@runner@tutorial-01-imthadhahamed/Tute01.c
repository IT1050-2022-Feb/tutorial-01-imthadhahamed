/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1, sub2, sum, average;
  
  printf("Enter subject 1 marks: ");
  scanf("%f", &sub1);

  printf("Enter subject 2 marks: ");
  scanf("%f", &sub2);

  sum = sub1 + sub2;

  average = sum / 2.0;

  printf("Average is %.2f \n", average);
  
  return 0;
}

