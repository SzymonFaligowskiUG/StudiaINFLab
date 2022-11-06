#include <stdio.h>

int main()  
{  
    float degree, radian;  
  
    printf("Enter angle in Degrees\n");  
    scanf("%f", &degree);  
  
    radian = degree * ( 3.14 / 180.0 );  
  
    printf("Angle in Radian is %fPi\n", radian);  
  
    return 0;  
} 