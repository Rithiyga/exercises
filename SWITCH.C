#include<stdio.h>
int main()
{
int num,smallest,count=0;
char choice;
do{
printf("enter a num:");
scanf("%d",&num);
switch(count)
{
case 0:
smallest = num;
break;
default:
if (num<smallest)
{
smallest=num;
}
break;
}
count++;
printf("do u want enter any other num?(y/n):");
scanf("%c",&choice);
}
while(choice=='y'||choice=='Y');
printf("the samllest num is:%d\n",smallest);
return 0;
}