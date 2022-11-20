#include <stdio.h>

int isPrime(int n) {
    int i, c = 0;

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        return 1;
  }
  else {
        return 0;
  }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++)
    {
        a++;
        while (!isPrime(a))
        {
            a++;
        }
        printf("%d ", a);
        
    }
    printf("\n");
}