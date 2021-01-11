
#include<stdio.h>
void main()
{
  char str1[100],str2[100];
  int i,j,flag=0;
  scanf("%s %s",&str1,&str2);
  for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0';i++,j++)
  {
      if(str1[i]!=str2[j])
                    {
                        flag=1;
                        break;
                    }
  }
  if(flag==1)
  {
      printf("unequal strings");
  }
  else
    printf("equal strings");
}
