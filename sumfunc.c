#include<stdio.h>
int myFunction(int x,int y)
{
int c;
c=x+y;
return(c);
}
int main()
{
int a,b;
printf("enter two number");
scanf("%d %d",&a,&b);
int result=myFunction(a,b);
printf("Result is =%d",result);
return 0;
}
