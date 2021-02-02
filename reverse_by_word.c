// reverse a string word by word
#include <stdio.h>
#include<stdlib.h>
int main() {
   int i,j,temp,index=0,count;
   char str1[100],str2[100];
   gets(str1);
   temp=strlen(str1)-1;
   for(i=strlen(str1)-1;i>=0;i--)
   {
       if(!(str1[i]>='a' && str1[i]<='z')||i==0)
       {
           count=i+1;
           if(i==0)
                count=i;
           for(j=count;j<=temp;j++)
           {
               str2[index]=str1[j];
               index++;
           }
           if(i>0){
                str2[index]=str1[count-1];
                index++;}
           temp=i-1;
       }
   }
   for(i=0;i<strlen(str1);i++)
   {
       printf("%c",str2[i]);
   }
    return 0;
}
