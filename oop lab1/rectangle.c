#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;

};
int main(){

struct Rectangle r;
printf("Enter length:");
scanf("%d",&r.length);
printf("Enter breadth:");
scanf("%d",&r.breadth);

printf("Area of rectangle = %d\n", r.length * r.breadth);
printf("Perimeter = %d\n", 2 *(r.length + r.breadth));
return 0;
}