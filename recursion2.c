/*
 * C Program to find Sum of Digits of a Number using Recursion
 */
#include <stdio.h>

int sum (int num);

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
int r,sod=0;
/*while(num>0)
{
  r=num%10;
  sod=sod+r;
  num=num/10;
}*/
int sum (int num)
{
    if (num != 0)

    {
        r=num%10;
        sod=sod+r;
        return  sum (num/10);
    }
    else
    {
       return sod;
    }
}
