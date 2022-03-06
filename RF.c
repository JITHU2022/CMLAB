#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.00001
#define f(x) pow(x,3)-20
void main ()
{
int n=0;
float x0,x1,x2;
float f0,f1,f2;
printf("ENTER THE LOWER AND UPPER LIMITS X0 & X1");
scanf("%f%f",&x0,&x1);
do
           {
              f0=f(x0);
              f1=f(x1);
              x2=(x0*f1-x1*f0)/(f1-f0);
              f2=f(x2);
              if (f0*f2<0)
              x1=x2;
              else
              x0=x2;
              n++;
              printf("\n NUMBER OF ITERATIONS=%d\t",n);
              printf("\t CUBE ROOT OF VALUE IS=%f\t",x2);
              printf("\t VALUE OF FUNCTION =%f\t",f2);
              }
              while(fabs(f2)>e&&n<=10);
              return0;
}
