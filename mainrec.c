//program on making main function as recursive
#include<stdio.h>
//int a=0;
int main(int i)
{


    if(i==3)
    {

        return;
    }
    printf(" %d ",i);
    i++;
    main(i);
}
