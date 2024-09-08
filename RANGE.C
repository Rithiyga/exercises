#include<stdio.h>
#include<stdlib.h>
int main()
{
int small,range,big,num,limit;
printf("enter the limit\n");
scanf("%d",&limit);
printf("enter %d numbers\n",limit);
scanf("%d",&num);
small=big=num;
limit=limit-1;
while(limit)
{
scanf("%d",&num);
if(num>big)
{
big=num;
}
if(num<small)
{
small=num;
}
limit--;
}
range=big-small;
printf("small num=%d\n big num=%d\n",small,big);
printf("range is %d\n",abs(range));
return 0;
}