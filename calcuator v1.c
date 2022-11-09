#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,e;
printf("select from below\n");
printf("1. addition\n 2. subtraction\n 3. multipliction \n 4.division\n");
scanf("%d",&a);
if(a<=0)
{
printf("invalid number try again..!");
}
switch(a)
{
case 1 : printf("enter the first number");
scanf("%d",&b);
printf("enter the second number");
scanf("%d",&c);
e=c+b;
printf("the addation of %d and %d is %d",b,c,e);
break;
case 2 : printf("enter the first number");
scanf("%d",&b);
printf("enter the second number");
scanf("%d",&c);
e=c-b;
printf("the subtraction of %d and %d is %d",b,c,e);
break;
case 3 : printf("enter the first number");
scanf("%d",&b);
printf("enter the second number");
scanf("%d",&c);
e=c*b;
printf("the mutipliction of %d and %d is %d",b,c,e);
break;
case 4: printf("enter the first number");
scanf("%d",&b);
printf("enter the second number");
scanf("%d",&c);
if(b==0||c==0)
{
printf("please enter any number greater than zero");
}
else{
e=c/b;
printf("the division of %d and %d is %d",b,c,e);
break;
}
}
getch();
}