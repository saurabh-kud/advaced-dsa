//program on use of calloc function
#include<stdio.h>
int main()
{

    int *p,n;

    printf("enter size of block\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
    scanf("%d",(p+i)); //*(p+i)
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);

    }

    return 0;

}
