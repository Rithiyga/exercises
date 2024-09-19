#include<stdio.h>
void main()
{
char c;
clrscr();
printf("enter a character:");
scanf("%c",&c);
{
if((c>=65&&c<=90)||(c>=97&&c<=122))
printf("it is a alphabet");
}
if(c>=65&&c<=90)
{
printf("\nit is a uppercase");
}
else if(c>=97&&c<=122)
{
printf("\nis is a lowercase");
}
else
{
printf("\n is a number");
}
{
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='U')
{
printf("\n is a vowel");
}
else
{
printf("\n is a consonant");
}
}
getch();
}