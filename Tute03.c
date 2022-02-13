/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int i, n, sum=0;//variables

  printf(" enter the any number :");//input number
  scanf("%d", &n);//read the number

  for(i=1 ;i<=n; i++)
  {
    sum = sum + i;//calculations
  }
  printf("sum = %d",sum);//print the number
  
  return 0;
}

