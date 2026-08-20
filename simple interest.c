#include<stdio.h>
  void main()
{
  float p,r,t,i;
  printf("gimmme principle value asap");
  scanf("%f", &p);
  printf("gimme rate  ");
  scanf("%f", &r);
  printf("gimme  number of years asap  ");
  scanf("%f", &t);
  i=p*r*t/100;
  printf("yay interest %f",i);
}
