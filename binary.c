#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to be converted : ");
    scanf("%d", &n);
    int stack[10], top = -1;
    while (n > 1)
    {
        stack[++top] = n % 2;
        n = n / 2;
    }
    stack[++top] = 1;
    printf("The binary number is : ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}