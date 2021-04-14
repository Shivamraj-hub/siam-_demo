#include<stdio.h>
int s1[20],s2[20],n;
int t1=-1,t2=-1;
int isfull(){
    if(t1==n-1)
        return 1;
    else
        return 0;
}
void push(int x){
    int j=0,k=0;
    if (!isfull()){
        while(j<=t1){
            if(s1[j]==x){
                s2[++t2]=x;
                k+=1;
                break;
            }
            j++;
        }
        if(k==0) 
            s1[++t1]=x;
    }
}
void pop(int y){
    int ind;
    for(int j=0;j<=t1;j++){
        if(s1[j]==y){
            ind=j;
            break;
        }
    }
    for(int l=ind;l<t1;l++){
        s1[l]=s1[l+1];
    }
    t1--;
}
int main(){
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    int o;
    for(int i=0;i<n;i++){
        printf("Elements : ");
        scanf("%d",&o);
        push(o);
    }
    o=0;
    while(o<=t2){
        pop(s2[o]);
        o++;
    }
    printf("Non duplicate Elements : \n");
    for(int i=0;i<=t1;i++){
        printf("%d\n",s1[i]);
    }
}