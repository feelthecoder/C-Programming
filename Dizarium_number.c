<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
void main()
{
	int r,original,num,org,powered,sum=0,count=0;
	printf("Enter a number to be checked:\n");
	scanf("%d",&original);
	num=original;
	while(num!=0)
	{
		++count;
		num/=10;
	}
	num=original;
	while(num!=0)
	{
		r=num%10;
		powered=pow(r,count--);
		sum=sum+powered;
		num/=10;
	}
	
	if(sum==original)
	printf("Dizarium");
	else
	printf("Not Dizarium");
}
=======
#include<stdio.h>
void main()
{
		int r,original,num,org,powered,sum=0,count=0;
	printf("Enter a number to be checked:\n");
	scanf("%d",&original);
	num=original;
	while(num!=0)
	{
		++count;
		num/=10;
	}
	num=original;
	while(num!=0)
	{
		r=num%10;
		powered=pow(r,count--);
		sum=sum+powered;
		num/=10;
	}
	
	if(sum==original)
	printf("Dizarium");
	else
	printf("Not Dizarium");
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
