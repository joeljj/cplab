#include<stdio.h>
void main()
{
int n1,n2,n3,big;
printf("enter three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
big=n1;
if(n2>big)
	big=n2;
if(n3>big)
	big=n3;
	printf("%d is greater",big);
}
