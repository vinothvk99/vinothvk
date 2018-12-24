#include<stdio.h>
void main()
{
 char input;
 clrscr();
 printf("Enter the character ");
 scanf("%c",&input);
 if (input>='a' && input<='z' || input>='A' && input<='Z')
 {
  printf("Alphabet");
 }
 else
 {
  printf("No");
 }
 getch();
 }
