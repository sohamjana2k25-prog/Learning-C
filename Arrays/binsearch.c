// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5]={21,67,68,69,80};
    int search=67;
    int len=5;
    int lb=0,ub=4;
    int mid=0,low=lb,high=ub,pos=-1;
    while (low<=high){
        mid=(low+high)/2;
        if (search==arr[mid]){
            pos=mid;
            printf("%d",pos);
            return 0;
        }
        else if (search<arr[mid]){
            high=mid-1;
        }
        else if (search>arr[mid]){
            low=mid+1;
        }
    }
    printf("Element not found. Final pos: %d\n", pos);
    return 0;
}
