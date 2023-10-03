#include<stdio.h>
int main(){
    float a,t,absolute,percentage,relative;
    printf("enter the true value");
    scanf("%f",&t);
    printf("enter the absolute value");
    scanf("%f",&a);
    absolute=t-a;
    relative=absolute/t;
    percentage=relative*100;
    printf("absolute error is %f",absolute);
    printf("relative error is %f",relative);
    printf("percentage error is %f",percentage);
}
