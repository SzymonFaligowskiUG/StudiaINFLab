#include <stdio.h>

int suma (int n, int h)
{
    if (n == 0)
    {
      return h;
    }
    return suma(n /10 , (n % 10) + h);

}

int sumaW(int n) {return suma(n, 0);}

int main ()
{
  printf("%d", sumaW(2235));
  return 0;
}