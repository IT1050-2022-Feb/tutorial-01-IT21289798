/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance;//variables
  float totalamount;//variables

  printf("enter the total distance the van travelled : ");//input the distance
  scanf("%d",&distance);//read the distance

  if(distance <=30 )
  {
    totalamount = distance * 50.00;//calculations
  }
  else if (distance > 30)
  {
    totalamount = 30 * 50.00 + (distance-30)*40.00;//calculations
  }
  printf("total amount is = %.2f",totalamount);//print the total
  
  return 0;
}
