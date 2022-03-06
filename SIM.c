#include<stdio.h>
#include<conio.h>
#define f(x) 1/(1+pow(x,2))
void main ()
{
float a,b,h,k=0,l=0,sum=0,integral,xnew;
int n,i;
printf("ENTER THE LOWER AND UPPER LIMITS OF INTEGRATION\n");
scanf("%f%f",&a,&b);
printf("ENTER THE NUMBER OF STRIPS=");
scanf("%d",&n);
h=(b-a)/n;
printf("h=%f",n);
sum=f(a)+f(b);
for(i=1;i<n-1;i++)
{
    if(i%2==0)
    {
        xnew=a+i*h;
        k=k+f(xnew);
    }
    else{
        xnew=a+i*h;
        l=l+f(xnew);
    }
    integral=(h/3)*(sum+4l+s*k);
    printf("\n VALUE OF THE INTEGRAL=%f",integral);
    return0;
}
}
