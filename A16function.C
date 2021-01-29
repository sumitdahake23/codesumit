#include<stdio.h>
#include<conio.h>
void sum(int a[]);
void min(int a[]);
void max(int a[]);
void occ(int a[]);
void main()
{
int a[]={12,22,22,44,55};

clrscr();
sum(a);
min(a);
max(a);
occ(a);
getch();
}
// Function of adding
void sum(int a[])
{
int i,sum=0;
for(i=0;i<5;i++)
{
 sum+=a[i];
}
printf("SUM is->%d \n",sum);
}
//function is to find minimum value
void min(int a[])
{
int min=99,i;
 for(i=0;i<5;i++)
 {
  if(min>a[i])
  {
   min=a[i];
  }
 }
printf("Min value=%d \n",min);
}
//program to check maximum number.
void max(int a[])
{
int max=0,i;
 for(i=0;i<5;i++)
 {
  if(max<a[i])
  {
   max=a[i];
  }
 }
printf("Max value=%d \n",max);
}
//Function of Multiple occuring number
void occ(int a[])
{
 int n,i;
printf("enter a element to find");
scanf("%d",&n);
for(i=1;i<5;i++)
{
 if(a[i]==n)
 {
  printf("\n Multiple Occuring number is %d",n);
 }
}
 printf("\n Thank u");
}
