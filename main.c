#include <stdio.h>
#include <math.h>
int main(void) {
int x,x0,x1,y,y0,y1;
float j;
printf("edit x=");
scanf("%d",&x);
printf("edit x0=");
scanf("%d",&x0);
printf("edit x1=");
scanf("%d",&x1);
printf("edit y=");
scanf("%d",&y);
printf("edit y0=");
scanf("%d",&y0);
printf("edit y1=");
scanf("%d",&y1);

j=((x-x0)/(x1-x0))-((y-y0)/(y1-y0));

printf("answer=%f",j);
return 0;
}