#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter how many tables you want: ");
scanf("%d",&a);
printf("Modulus table upto %d\n",a);
for(b=1;b<=a;b++)
{
for(c=1;c<=10;c++)
printf("%d%%%d=%d\n",b,c,b%c);
printf("-*-*-*-*-*-*-*-*\n");
}
return 0;
}