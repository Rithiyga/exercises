#include<stdio.h>
int main()
{
int num,rem ,originalNum,octal=0,place=1;
printf("enter a decimal num:");
scanf("%d",&num);
originalNum= num;
do
{
rem=num%8;
octal=octal+(rem*place);
num=num/8;
place*=10;
}
while
(num>0);
printf("the ocatl equivalent of %d is:%d\n",originalNum,octal);
return 0;
getch();
}