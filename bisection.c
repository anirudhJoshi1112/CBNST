#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001;
#define f(x) x*x*X-4*x+1;

int main(){
    float x0,x1,x2;
    float f1,f2,f3;
    int i=0;
    do{
        printf("enter the value of x0 and x1");
        scanf("%f%f",&x0,&x1);
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);

        if(fo*f1<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
    }
    while(fabs(f2)>e)
    getch();
}
