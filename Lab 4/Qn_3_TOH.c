//WAP to implement TOH problems using recursion
#include<stdio.h>

void toh(int n, char from, char to, char temp)
{
    if(n==0)
    {
        return;
    }

    else{
        toh(n-1,from,temp,to);
        printf("\n Move disk %d from %c to %c",n,from,to);
        toh(n-1,temp,to,from);
    }
}
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    toh(n,'L','C','R');
}