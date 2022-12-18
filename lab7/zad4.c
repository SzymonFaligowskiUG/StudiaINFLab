#include <stdio.h>

int maxi(int tab[], int n) {

    int max = 0;
    int* maxp = NULL;

    for (int i =0; i < n; i++) {
    
        if(max < tab[i]){
            max = tab[i];
            maxp = &tab[i];
        }
    }
    if (maxp != NULL) {
        *maxp = 0;
    }
    return max;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a) / sizeof(int);
    int m = maxi(a,n);
    for(int i =0; i < n; i ++){
        printf("%d\t", a[i]);
    }
        printf("\n");
        printf("%d\n", m);



}