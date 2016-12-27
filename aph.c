#include<stdio.h>
int main()
{
 char c;
 printf("\n enter a charcter:");
 scanf("%c",&c);
 if((c>='a'&&c<='m')||(c>='A'&&c<='M'))
   printf("%c is an alphabet:",c);
 else
   printf("%c is not an alphabet:",c);
 return 0;
 }
