#include<stdio.h>
int sum(int a,int b);
void ps(int n);

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("%d\n",c);
    ps(7);
    s=swap(a,b);
    printf("%d\n",s);
    return 0;
}
void ps(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
    }
}
int sum(int a,int b){
    return a+b;
}
int swap(int a,int b){
    int a=trans;
    int b=a;
    int a=b;
    printf("a : %d",a);
    printf("b : %d",b);
}