#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char n1[10],n2[10],n3[10],n4[10],n5[10],n6[10],n7[10],n8[10],n9[10],n10[10];
 int i,x[10],large=0,small;
 float sum=0;
 clrscr();
 printf("Enter a player name==>");
 scanf("%s %s %s %s %s %s %s %s %s %s",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
 for(i=1;i<=10;i++)
 {
  printf("Enter players score:- ");
  scanf("%d",&x[i]);
  if(x[i]>large)
  large=x[i];
  if(x[i]<small)
  small=x[i];
  sum=(sum+x[i]);
 }
 sum=sum/10;
 printf("P1=%s\n,P2=%s\n,P3=%s\n,P4=%s\n,P5=%s\n,P6=%s\n,P7=%s\n,P8=%s\n,P9=%s\n,P10=%s\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);
 printf("Average score of player is= %0.2f",sum);
 printf("\n greter score==>  %d",large);
 printf("\n smallest score==>%d",small);
 getch();
}