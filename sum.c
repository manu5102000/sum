/*
* =================================================================
* Problem: Find the sum of series of whole numbers
* Generic outline for most problems:
* 1.  get input:--> prompt user,read from keyboard
*   a) Ask user the lower and upper limit of the series
*      Call that a and b respectively
*   b)read in a and b during computation(below)
* 2.  Do computation:--> need to mcompute sum
*   Need to initailize sum(int s=0;)
*   a) initialize i to lower limit.
*   b) check if it is less than or equal to the upper limit
*   c) add the number into running sum--> s=s+i
*   d) increase i by 1
*   e) repeat b-d 'b' times
* 3.  report results:--> print out final sum of series
* ================================================================
*/
#include <stdio.h>
int main()
{
   int a,b,i,s=0;;
   printf("Enter lower limit : ");
   scanf("%d",&a);
   printf("Enter upper limit : ");
   scanf("%d",&b);
   for(i=a;i<=b;i++)
   {
      s=s+i;
   }
   printf("\nSum of series : %d\n",s);
   return 0;
   }
