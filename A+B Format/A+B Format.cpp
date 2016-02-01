#include <stdio.h>
int main()
{
  int a,b,c,x1,x2,x3;
  scanf("%d%d",&a,&b);
  c=a+b;
  while(c<0)
  {
    printf("-");
    c=c*(-1);
  }
  if(c<1000) 
  {
    printf("%d",c);
  }
  else if(c=<1000000&&c>=1000)
  {
    x1=c/1000;
    x2=c-x1*1000;
    printf("%d,%03d",x1,x2);
  }
  else if(c>1000000)
  {
    x1=c/1000000;
    x2=(c-x1*1000000)/1000;
    x3=(c-x1*1000000-x2*1000);
    printf("%d,%03d,%03d",x1,x2,x3);
  }
  return 0; 
  } 
