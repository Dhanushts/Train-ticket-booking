#include<stdio.h>
#include<string.h>
int main()
{
int n,i,ch,amount,price;
char name[20];
printf("\n\t\tRailway ticket booking system\n");
printf("Enter Train name:");
scanf("%[^\n]s",name);
printf("Enter number of tickets:");
scanf("%d",&n);
if(n>100)
printf("Ticket full");
else
{
printf("Select 1 for AC");
printf("\nSelect 2 for second class");
printf("\nSelect 3 for third class");
printf("\nEnter your choice:");
scanf("%d",&ch);
if(ch<1||ch>3)
printf("Invalid choice!");
else
{
switch(ch)
{
case 1:
printf("\nThe amount for AC class is 120");
price=120*n;
printf("\nTrain name:%s",name);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;

case 2:
printf("\nThe amount for Second class is 100");
price=100*n;
printf("\nTrain name:%s",name);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;

case 3:
printf("\nThe amount for Third class is 80");
price=80*n;
printf("\nTrain name:%s",name);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;
}
}
}
return 0;
}