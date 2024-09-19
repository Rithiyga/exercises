#include<stdio.h>
int main()
{
int math,phy,chem,totalmarks,totalmathphy;
printf("enter marks in maths:");
scanf("%d",&math);
printf("enter marks in physics:");
scanf("%d",&phy);
printf("enter marks in chemistry:");
scanf("%d",&chem);
totalmarks=math+phy+chem;
totalmathphy=math + phy;
if(math>=65 && phy>=55 && chem>=50 && (totalmarks>=190)||totalmathphy>=140)
{
printf("the candidate is eligible for admission:\n");
}else{
}
{
printf("the candidate is not eligible for admission:\n");
}
getch();
return 0;
}