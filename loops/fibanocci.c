#include <stdio.h>

int main() {
    int n, sl = 0, l = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", sl);
        next = sl+l;
        sl=l;
        l = next;
    }
    return 0;
}
