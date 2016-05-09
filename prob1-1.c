#include<stdio.h>
int pow(int x);

int main(void)
{
  printf("%d",pow(52));

  return 0;
}

int pow(int x);
{
  if(x==0)
    return 1;
  else
    return 2*pow(x-1);
}
