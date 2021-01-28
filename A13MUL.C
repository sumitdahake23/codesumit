#include<stdio.h>
#include<conio.h>
void multiple(int n,int no);
void main()
{
int no,n;
clrscr();
printf("Enter a starting value =>");
scanf("%d",&no);
printf("Enter a Ending value =>");
scanf("%d",&n);
multiple(n,no);
getch();
}
void multiple(int n,int no)
{
 int mul=0;
 for(no=1;no<=n;no++)
 {

  mul=no*n;
  printf("%d \n",mul);
 }
}

