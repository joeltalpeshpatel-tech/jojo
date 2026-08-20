#include<stdio.h>
void main()
{
  int c,a,b;
  printf("hai enter the values\n");
  scanf("%d %d %d", &a,&b,&c);
  if(a>b && a>c)
    printf("%d is greater",a);
  if(b>c && b>a)
    printf("%d is greater",b);
  if(c>a && c>b)
    printf("%d is greater",c);
  }
