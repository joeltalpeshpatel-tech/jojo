#include<stdio.h>
void main()
{
  float a,b,c,d,e;
  printf("ENTER THE LENGTH  : ");
  scanf("%f", &a);
  printf("\nENTER THE WIDTH  : ");
  scanf("%f", &b);
  c=a*b;
  d=a+b;
  e=2*d;
  printf("\nTHE PERIMETER IS %f", e);
  printf("\nTHE AREA IS %f", c);
  }
