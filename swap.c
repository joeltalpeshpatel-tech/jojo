#include<stdio.h>
void main()
{
    int x,y,temp;
    printf("enter x ");
    scanf("%d", &x);
    printf("\nENTER y ");
    scanf("%d", &y);
    temp=x;
    x=y;
    y=temp;
    printf("\nthe swappped values are x=%d y=%d", x,y);
}
