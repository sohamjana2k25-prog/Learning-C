// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5]={21,69,68,67,80};
    int i,j;
    int temp=0;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int c=0;c<5;c++){
        printf("%d\t",arr[c]);
    }
    return 0;
}
