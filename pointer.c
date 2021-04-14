#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    printf("%p\n",&arr[2]);
    printf("%d\n",*(&arr[0]));
    printf("%d\n",arr);
}