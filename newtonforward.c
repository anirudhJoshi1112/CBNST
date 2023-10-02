#include<stdio.h>
#include<math.h>
int main(){
    float a[100][100],x,u1,u,y;
    int i,j,n,fact;
    printf("enter the value of n which is the total terms \n");
    scanf("%d",&n);
    printf("enter the values of x \n");
    for(int i=0;i<n;i++){
        scanf("%f",&a[i][0]);
    }
    printf("enter the value of y \n");
    for(int i=0;i<n;i++){
        scanf("%f",&a[i][1]);
    }
    printf("enter the value of x which you want to check\n");
    scanf("%f",&x);

    //find difference table

    for(int j=2;j<n+1;j++){
        for(int i=0;i<n-j+1;i++){
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }

    //print difference table

    printf("your difference table is\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++)
            printf("%f",a[i][j]);
        printf("\n");
    }
    
    //find u
    u = (x-a[0][0]/a[1][0]-a[0][0]);

    //initial y,u1,fact

    y=a[0][1];
    u1=u;
    fact=1;
    for(int i=2;i<=n;i++){
        y=y+(u1*a[0][i])/fact;
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("\n\n value at x=%g is = %f",x,y);
}
