#include<stdio.h>

int pow(int x);
double integral(int y);
double error(int z);

int main(void)
{
  integral(pow(1));
  error(pow(1));
  integral(pow(2));
  error(pow(2));
  integral(pow(3));
  error(pow(3));
  integral(pow(4));
  error(pow(4));
  integral(pow(5));
  error(pow(5));

  return 0;
}

int pow(int x)
{
  if(x==0)
    return 1;
else
  return 10*pow(x-1);
}

double integral(int y)
{
  int i;
  double sum;
  sum=0;
  for(i=1;i<y;i++)
    sum=sum+4/(1+(i/y));
  sum=2*sum;
  sum=sum+6;

  printf("積分の値は%fです    ",sum/y/2);
}

double error(int z)
{
  int i;
  double h=1/z,sum;
  double x;

  sum=0;
  for(i=1;i<=z;i++){
    x=i/z;
    sum=sum+(2*h*h*h*(x-1)*(x-1)/3/(1+x*x)/(1+x*x)/(1+x*x));
  }
  printf("誤差は%f\n",sum);
}
