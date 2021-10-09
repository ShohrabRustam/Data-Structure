#include<stdio.h>
#include<stdlib.h>
struct Rectangle{
    int length,breadth;
};
int main()
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->breadth=20;
    printf("area of rectangle = %d",p->breadth*p->length);
    return 0;
}