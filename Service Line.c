#include <stdio.h>

int main() {
    int t, n;
    int i, j;
    int a, b;
    int max;
    scanf("%d %d", &n, &t);
    //Declaring array
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        max = 3;
        for(j = a; j <= b; j++) {
            if(arr[j] < max) {
                max = arr[j];
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
