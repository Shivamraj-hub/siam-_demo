#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter no. : \n");
    scanf("%d", &n);
    do
    {
        printf("%d * %d = %d\n", n, i, i * n);
        i=i+1;
    }while(i<=10);
    return 0;
}