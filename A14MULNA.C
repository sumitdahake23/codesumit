#include<stdio.h>
#include<conio.h>
void mulname(char a[10],int n);
void main()
{
 int n,i;
 char a[10];
 clrscr();
 printf("Enter a name==> \n");
 scanf("%s",&a);
 printf("Enter how many times you want to print==>\n");
 scanf("%d",&n);
 mulname(a,n);
 getch();
}
 void mulname(char a[10],int n)
 {
 int i;
 printf("Name==>\n");
  for(i=1;i<=n;i++)
  {
   printf("%s \n",a);
  }
 }