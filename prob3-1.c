#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double pai(int x);

int main(void)
{
pai(10);
pai(1000);
pai(100000);
pai(10000000);

return 0;
}

double pai(int x)
{
  int i;
double RAND,estimated,accuracy,sum,temporary[10],sub[i],ac;

sum=0;
for(i=0;i<10;i++){
RAND=rand()/RAND_MAX+1;
temporary[i]=4/(1+RAND*RAND);
sum=sum+temporary[i];
}
estimated=sum/10;

for(i=0;i<10;i++)
sub[i]=estimated-temporary[i];

ac=0;
for(i=0;i<10;i++)
ac=ac+sub[i]*sub[i];
printf("„’è’l‚Í%f‚Å‚·   ",estimated);
accuracy=sqrt(ac/90);
printf("¸“x‚Í%f‚Å‚·\n",accuracy);
}
