#include <stdio.h>

int main() {
    int n,rem=0,rev=0;
    scanf("%d",&n);
    int org=n;
    while (n!=0){
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    if (rev==org){
        printf("palindrome");
    }
    else {
        printf("NOPE");
    }
}
