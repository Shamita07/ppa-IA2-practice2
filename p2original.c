#include <stdio.h>
int input()
{
  int a;
  printf("enter a value:\n");
  scanf("%d" , &a);
}

int check_scalene(int a,int b,int c)
{
  int flag=1;
  if(a!=b&&b!=c)
  {
    flag=0;
  }
  else
  {flag=1;}
  return flag;
}

void output(int a, int b, int c,int isscalene)
{
  if(isscalene==0)
  {
    printf("SCALENE\n");
  }
  else
  {
    printf("NOT SCALENE\n");
  }   
}

int main()
{
  int a,b,c,isscalene;
  a=input();
  b=input();
  c=input();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
