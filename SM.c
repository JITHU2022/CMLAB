#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x,3)-20
void main ()
{
int n=0;
float x0,x1,x2;
float f0,f1,f2;
printf("ENTER THE APPROXIMATE OF THE ROOT ");
scanf("%f%f",&x0,&x1);
do
           {
              f0=f(x0);
              f1=f(x1);
              x2=(x0*f1-x1*f0)/(f1-f0);
              f2=f(x2);
              x0=x1;
              n++;
              printf("\n NUMBER OF ITERATIONS=%d\t",n);
              printf("\t ROOT OF FUNCTION IS=%f\t",x0);
              printf("\t VALUE OF FUNCTION =%f\t",f0);
              }
              while(fabs(f2)>e);
              return0;
}
