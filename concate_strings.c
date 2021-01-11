
#include<stdio.h>
void main()
{
  char str1[100],str2[100];
  int i,j;
  scanf("%s %s",&str1,&str2);
  for(i=0;str1[i]!='\0';i++)
  {

  }
  for(j=0;str2[j]!='\0';i++,j++)
  {
      str1[i]=str2[j];
  }
  str1[i]='\0';
  printf("%s",str1);
}
