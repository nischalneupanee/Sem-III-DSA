// WAP to generate fibonacci sequence using recursion
#include <stdio.h>

int fibbo(int n)
{
    if (n == 0 | n == 1)
    {
        return n;
    }
    else
    {
        return fibbo(n - 1) + fibbo(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int result = fibbo(i);

        printf("%d\t", result);
    }
}