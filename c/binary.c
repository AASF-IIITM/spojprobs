#include<stdio.h>
main()
{
int num,rem,i=1;
int binary=0;
printf("Enter the number : ");
scanf("%d",&num);
while(num)
{
	rem=num%2;
	binary+=rem*i;
	num/=2;
	i*=10;
	
}
printf("\n Binary equivalent = %d\n",binary);
}

