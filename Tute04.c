/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int maximum(int no1 , int no2);
int minimum(int no1 , int no2);
int multiply(int no1 , int no2);

int main() {
   int no1, no2;//variables
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));//print minimum
   printf("%d ", maximum(no1, no2));//print maximum
   printf("%d ", multiply(no1, no2));//print multiply
   return 0;
}

int maximum(int no1 , int no2)
{
  int maximum;
  if(no1 > no2)
  {
    maximum = no1;//calculations
  }
  else
  {
    maximum = no2;//calculations
  }
  return maximum;
}
int minimum(int no1 , int no2)
{
  int minimum;
  if(no1 < no2)
  {
    minimum = no1;//calculations
  }
  else
  {
    minimum = no2;//calculations
  }
  return minimum;
}
int multiply(int no1 , int no2)
{
  int multiply;
  multiply = no1 * no2;//calculations
  return multiply;
}