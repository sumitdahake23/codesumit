#include<stdio.h>
#include<conio.h>
void main()
{
  char a[10],b[10],c[10];
  int x,y,z;
  float avg;
  clrscr();
  printf("\nEnter the name of three person ==> \n");
  scanf("%s %s %s",&a,&b,&c);
  printf("\nEnter the age of three person ==> \n");
  scanf("%d %d %d",&x,&y,&z);
  avg=(x+y+z)/3;
  printf("\nAverage of ages is==> %0.2f\n",avg);
  if(x>y&&x>z)
   {
    printf("\n%s is eldest.\n",a);
   }
  else if(y>x&&y>z)
    {
     printf("\n%s is eldest.\n",b);
    }
    else
    {
    printf("\n%s is eldest.\n",c);
    }
   if(x<y&&x<z)
   {
    printf("\n%s is youngest.\n",a);
   }
  else if(y<x&&y<z)
    {
     printf("\n%s is youngest.\n",b);
    }
    else
    {
    printf("\n%s is youngest.\n",c);
    }

getch();
}
