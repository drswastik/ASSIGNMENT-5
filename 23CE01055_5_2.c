#include<stdio.h>
int main(){
    int a,b,i=0;
    printf("DIVIDEND:");
    scanf("%d",&a);
    printf("DIVISOR:");
    scanf("%d",&b);
    if(b!=0){
    while(a>=b){
       a=a-b;
       i++;
    }
   
    printf("REMAINDER:%d\n",a);printf("QUOTIENT:%d",i);}
    else{
        printf("Division by 0 is not allowed!!");
    }

return 0;
}