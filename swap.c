//swap operation
#include<stdio.h>
void swap(int *ptra,int *ptrb);
void main()
{
  int i,j,c,num1,num2,*ptra=&num1,*ptrb=&num2;
  scanf("%d %d",&num1,&num2);
  //not using third variable
  c=num1+num2;
  num1=c-num1;
  num2=c-num2;
  printf("%d %d",num1,num2);
  //using xor operation
  num1=num1^num2;
  num2=num1^num2;
  num1=num1^num2;
  printf("%d %d",num1,num2);
}
//using pointers
void swap(int *ptra,int *ptrb)
{
    int sum=*ptra+*ptrb;
    *ptra=sum- *ptrb;
    *ptrb=sum- *ptrb;
    printf("%d %d",num1,num2);
}
