#include <stdio.h>
int main()
{
    int a;
    printf("\Garbage value= %d",a);
    a=9;
    printf("\nValue of a in main block= %d",a);
    anotherBlock();
}
void anotherBlock()
{
    int a=5;
    printf("\nValue of a in another block= %d",a);
}

