#include <stdio.h>

int searcha(int a[], int n, int s) {
    if(n < 0) {
        return -1;
    }
    if(a[n] == s) {
        return n;
    }
    return searcha(a, n-1, s);
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main ()
{
    int x[] = {1,2,3,4,5};
    int n = 5;
  printf("a) %d\n", searcha(x, n-1, 5));
  printf("b) %d\n", binarySearch(x,0, n - 1, 5));
  return 0;
}