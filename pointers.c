\\Anusha Singh,Prn-21070123019

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int x=4;
int*p;
p=&x;
printf("The memory address is :%d\n",*p);
printf("value of x is : %d\n",x);
printf("%d\n",&x);
printf("%d\n",p);
printf("%d\n",&p);
  return 0;	
}
