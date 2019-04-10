#include<stdio.h>
float fun (float x);
void bisection (float *x, float a, float b, int *itr);

int main ()
{
    int itr = 0;
    float x, a=1, b=2, allerr, x1;
    //printf("\nEnter the value of allowed error: \n");
    scanf("%f", &allerr);
    bisection (&x, a, b, &itr);
#include<math.h>
int maxmitr;
do
{
  if(fun(a)*fun(x)<0)
    b=x;
  else
    a=x;
  bisection(&x1,a,b,&itr);
  if(fabs(x1-x)<allerr)
  {
   printf("Iteration Count=%d, root = %6.4f\n", itr, x1);
    return 0;
  }
  x=x1;
}
while(itr<maxmitr);
//printf("The solution does not converge or iterations not sufficient");
return 1;
}
float fun(float x)
{
  return(exp(x)*x-3*x-2);
}
void bisection(float *x,float a,float b,int *itr)
{
  *x=(a+b)/2;
  ++(*itr);
  //printf("Iteration no.%3d x=%7.5f\n",*itr,*x);
}
