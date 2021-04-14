#include<stdio.h>
int fact(int);
int main(){
    int n,factorial;
    scanf("%d",&n);
    factorial=fact(n);
    printf("%d\n",factorial);
}
int fact(int n){
    int j=1;
    for(int i=1;i<=n;i++)
        j=j*i;
    return j;
    
}