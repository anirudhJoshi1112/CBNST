#include<stdio.h>
main()
{

float av,n,tv,t1,t2,e,ea,er,ep,temp;
printf(“Enter true value”);
scanf(“%f”,&tv);
n=tv;
t1=(n*10000);
t2=(int)t1%10;
if(t2>5)
{
n=n+0.001;

}

if(t2==5)
{
t1=(n*1000);
t2=(int)t1%10;
if((int)t2%2!=0)
n=n+0.001;

}
printf(“%f”,n);
t1=n*1000;
t1=t1-(int)t1;
t1=t1*.001;
n=n-t1;
e=tv-n;
ea=fabs(e);
er=ea/tv;
ep=er*100;
printf(“\nabsolute value…%f”,n);
printf(“\nerror…%f”,e);
printf(“\nabsolute error…%f”,ea);
printf(“\nrelative error…%f”,er);
printf(“\npercentage error….%f”,ep);

}
