#include<stdio.h>
void main()
{
 char input;
 clrscr();
 printf("Enter the character to check ");
 scanf("%c",&input);
 if (input=='a' || input=='e' || input=='i' || input=='o' || input=='u' || input=='A' || input=='E' || input=='I' || input=='O' || input=='U')
 {
  printf("Vowels");
 }
 else
 {
  printf("Consonant");
 }
getch();
}
