#include<stdio.h>

int main()
{
    int a,i,n;
    printf("Enter a no. : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        n=a*i;
        printf("%d*%d=%d\n",a,i,n);
    }
    
    return 0;
}
