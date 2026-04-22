#include <stdio.h>

int main()
{
    int rows;
    scanf("%d",&rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (rows - 1 - i); j++)
        {
            printf(" ");
        }
        int coefficient = 1;
        for (int k = 0; k <=i; k=k+1)
        {
            printf("%d ",coefficient);
            coefficient = coefficient * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}
