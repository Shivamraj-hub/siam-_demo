#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("Maths-15\n");
    }
    else if(a==1){
        printf("Science-15\n");
    }
    else if(a==2){
        printf("Science and Maths both-45\n");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}