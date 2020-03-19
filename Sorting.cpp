#include<stdio.h>

int main()
{
int arr[5]={2,4,5,3,1};
int size=5;
int minindex;
int temp;
for(int i=0;i<size;i++)
{
	printf("%d",arr[i]);
}
printf("\n");
for(int i=0;i<size;i++)
{ minindex=i;
	for(int j=i+1;j<size;j++)
	{
if(arr[minindex]>arr[j])
	minindex=j;
	}
	temp=arr[minindex];
	arr[minindex]=arr[i];
	arr[i]=temp;
}
for(int i=0;i<size;i++)
{
	printf("%d",arr[i]);
}
return 0;
}

