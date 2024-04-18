#include <stdio.h>
int main()
{
    calculate();
}
void calculate()
{

    register int x=0;
    for(int i=0;i<3;i++)
    {

        x=x+5;
        printf("\nx= %d",x);
    }
}
