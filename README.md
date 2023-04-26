# Pointers
#include <stdio.h>
int main()
{
	int arr[6]={10,20,30,40,50,60};
	printf("Enter the number to be searched	: ");int a,i,l;
	scanf("%d",&a);
	
	l=6;
	int b=0;
	int e=l-1;
	int mid,result=-1;
	while(b<=e)
{
	mid=(b+e)/2;
	if (arr[mid]==a)
	{

	result=mid;	break;
	}	
	else if(arr[mid]>a)
	{
		e=mid-1;
	}
	else if(arr[mid]<a)
	{
		b=mid+1;
	}
}
printf("%d",result);
}
