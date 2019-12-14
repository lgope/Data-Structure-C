#include<stdio.h>
#include<string.h>
int main()
{
  int i,count=0;
  char ch[1000];
  gets(ch);
  for(i=0;i<ch[i]!='\0';i++)
  {
    if(ch[i]=='A'||ch[i]=='a')
    {
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
