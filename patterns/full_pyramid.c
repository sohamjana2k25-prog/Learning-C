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
        for (int k = 0; k < (2*i+1); k=k+1)
        {
            printf("%d",k+1);
        }
        printf("\n");
    }
    return 0;
}
