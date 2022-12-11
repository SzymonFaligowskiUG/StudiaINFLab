#include <stdio.h>

int suma (int n)
{
    if (n == 1)
    {
      return 1;
    }
    return n % 10 + suma(n/10);


}

int main ()
{
  printf("%d", suma(1235));
  return 0;
}