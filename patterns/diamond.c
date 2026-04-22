#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i <  2*n - 1; i++)
    {
        int del;
        if (i < n)
            del = 2 * (n - i) - 1;
        else
            del = 2 * (i - n + 1) + 1;

        for (int j = 0; j < del; j++)
            printf(" ");
        for (int k = 0; k < 2 * n - del; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
