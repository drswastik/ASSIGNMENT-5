#include<stdio.h>
//finding number of digits
int main(){
    int a,b,i,j,org,p,o,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    org=a;
    for(i=0;a>0;i++){
    a=a/10;}
printf("The number of digits in the entered number is %d\n",i); 
//storing digits in array
int arr[i];
for(j=0;j<i;j++){
   int k=org%10;
   org=org/10;
   arr[j]=k;}
//checking unique elements in array
for(b=0;b<i;b++){
    int unique=1;
    for(o=0;o<b;o++){
        if(arr[b]==arr[o]){
            unique = 0;
            break;
        }
    }if(unique==1){
    sum+=arr[b];
}}
printf("The sum of all unique digits is %d\n",sum);
int n;
for(n=i-1;n>=0;n--){
    printf("%d\n",arr[n]);
}

return 0;}