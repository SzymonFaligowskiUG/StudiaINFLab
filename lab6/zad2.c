#include <stdio.h>

int gcd(int a,int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b%a,a);
}
 
void main()
{
    int n1,n2,answer;
    printf("Enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    answer=gcd(n1,n2);
    printf("GCD(%d,%d) = %d",n1,n2,answer);
}