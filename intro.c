#include <stdio.h>
int main()
{
    int l,b;
    int area,peri;
    printf("Enter length of rectangle:\n");
    printf("Enter breath of rectangle:\n");
    scanf("%d",&l);
    scanf("%d",&b);
    area=l*b;
    printf("area of rectangle: %d\n", area);
    peri=2*(l+b);
    printf("perimeter of rectangle: %d\n",peri);
}
