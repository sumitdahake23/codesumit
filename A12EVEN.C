#include<stdio.h>
#include<conio.h>
void checkeven(int n,int no);
void main()
{
int no,n;
clrscr();
printf("Enter a starting value =>");
scanf("%d",&n);
printf("Enter a Ending value =>");
scanf("%d",&no);
checkeven(n,no);
getch();
}
void checkeven(int n,int no)
{
 int sum=0;
 while(n<=no)
 {
  if(n%2==0)
  {
   printf("\n Even number is=>%d ",n);
   sum=sum+n;
  }
  n++;
 }
 printf("\n Addition of a number is =>%d ",sum);
}

