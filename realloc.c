//program on realloc function
#include<stdio.h>
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    printf("enter values\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("\n%d ",*(p+i));
    }


    p=realloc(p,3*sizeof(int));
    printf("enter new values\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("\n%d ",p[i]);
    }
     free(p);
}
