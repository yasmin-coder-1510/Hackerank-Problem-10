#include<stdio.h>

int main()
{
  int h,m,s;
  char period[3];

  scanf("%d:%d:%d%s",&h,&m,&s,period);

  if(period[0]=='P' && h!=12)
  {
    h = h + 12;
  }

  if(period[0]=='A' && h==12)
  {
    h = 0;
  }

  printf("%02d:%02d:%02d",h,m,s);

  return 0;
}

