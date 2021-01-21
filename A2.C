#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
//  clrscr();
  printf("Plese enter your age to get remark==>>");
  scanf("%d",&age);
  if(age<18)
   {
    printf("\n ==>> You are a junior kid\n");
   }
  else if(age>=18&&age<25)
   {
    printf("\n ==>> You are a College student\n");
   }
  else if(age>=25&&age<35)
  {
    printf("\n ==>> You are a Carrior oriented\n");
   }
  else if(age>=35&&age<50)
  {
    printf("\n ==>> You are a in middle age\n");
   }
  else
  {
    printf("\n ==>> You are in old age\n");
   }
getch();

}
