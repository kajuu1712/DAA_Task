#include<stdio.h>
#include"file1.c"
void main()
{
    extern int x;
    show();
    x++;
    printf("\nAfter modifying the value of x in File 2 , x is %d",x);
}
