//program on malloc function
#include<stdio.h>
int main()
{

    char *p;
    int n;
    printf("enter size of block\n");
    scanf("%d",&n);
    p=(char*)malloc(n*sizeof(char));
    for(int i=0;i<n;i++)
    {
        printf("%d ",(p+i));//&p[i]
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%c ",p[i]);
    }
    printf("\n enter values as per size of n\n");
    for(int i=0;i<n;i++)
    {
        scanf("%c",(p+i));//&p[i]
    }
    for(int i=0;i<n;i++)
    {
        printf("%c ",*(p+i));


    }


    return 0;

}
