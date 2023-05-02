#include <stdio.h>
int binarySearch(int A[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
        {
            int mid = (low + high)/2;
            if (x == A[mid])
                {
                    return mid;
                }
            else if (x < A[mid])
                {
                    high = mid - 1;
                }
            else
                {
                    low = mid + 1;
                }
        }


    return -1;
}

int main(void)
{
    int A[10],n;
    int target;
    printf("enter size of the array\n");
    scanf("%d",&n);
    printf("enter elements in an array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("enter element that you want to search\n");
    scanf("%d",&target);
    int index = binarySearch(A, n, target);
    if(index!=-1)
    printf("element found at %d position",index);
    else
    printf("element no found");
    return 0;
}
