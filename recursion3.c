//program on calculating reverse of digit using recursion
#include<stdio.h>
int main(){
   int num,reverse_number;

   //User would input the number
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Calling user defined function to perform reverse
   reverse_number=reverse_function(num);
   printf("\nAfter reverse the no is :%d\n",reverse_number);
   printf("sum of digit=%d\n",reverse_number);
   if(num==reverse_number)
    printf("number is palindrome");
   else
    printf("number is not palindrome");

   return 0;
}
int sum=0,rem;
reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;

}
