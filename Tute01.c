/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float S1marks , S2marks , average;//varriables

  printf("enter the subject1 marks : ");//input subject1 marks
  scanf("%f",&S1marks);//read the marks
  
  printf("enter the subject2 marks : ");//input subject2 marks
  scanf("%f",&S2marks);//read the marks

average = (S1marks + S2marks)/2.0;//Calculations

printf("Average mark is = %.2f",average);//print the average
  
  return 0;
}

