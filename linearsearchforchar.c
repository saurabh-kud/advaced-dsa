//program on linear search in a character array
#include <stdio.h>
int main()
{
  char array[10], search;
  int c,flag=0;



printf("enter any string\n");
    scanf("%s",array);

     printf("Enter a character to search\n");
 fflush(stdin);
  scanf("%c", &search);


  for (c = 0; array[c]!='\0';c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      flag=1;
      printf("%c is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (flag == 0)
    printf("%c isn't present in the array.\n", search);

  return 0;
}
