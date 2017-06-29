#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n enter the character");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')
{
switch(ch)
{
case'A':
case'E':
case'I':
case'O':
case'U':
case'a':
case'e':
case'i':
case'o':
case'u':
printf("%c is a vowel\n",ch);
break;
default:
printf("%c is a consatant\n",ch);
}
}
else
{
printf("%c is not an alphabet\n",ch);
}
getch();
}
