#include<stdio.h>
#include<conio.h>
void main()
{
char letter;
clrscr();
printf("enter the character");
scanf("%c",&letter);
if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
