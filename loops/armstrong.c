#include <stdio.h>
#include <math.h>

int main() {
    int n,rem=0,sum=0,count=0;
    scanf("%d",&n);
    int temp=n;
    while (temp!=0){
        temp=temp/10;
        count=count+1;
    }
    int org=n;
    while (org!=0){
        rem=org%10;
        sum = sum + pow(rem, count);
        org=org/10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not.\n", n);
    return 0;
}
