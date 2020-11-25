#include<stdio.h>
#include<math.h>

int main(void)
{
   printf("INPUT: "); \\getting input of user
   
   float x,y,z,p,l; \\initialising the variables
   
   scanf("%f %f %f",&x,&y,&z); \\getting input from the reader
  
   if(x>0 && y>0 && z>0)   \\checking that all values are positive.
   {
     p = fmod(y,x);  \\finding distance between the vehicle and a fuel station that we passed
     l= x - p ;      \\distance left to the nearest station
   printf("OUTPUT: ");  
    if(z<l)          \\comparing the distance left to the nearest station and range left.
      {
          printf("NO\n");
      }
   else
      {
          printf("YES\n");
      }  
   }
   else
   {
      printf("All the values need to be positive!\n"); \\promptiong user to input positive values
   }

}