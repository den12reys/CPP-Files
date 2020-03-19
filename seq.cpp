#include<stdio.h>

int seqsearch(int a[],int n,int x)
{int i;
	for(i=0; i<n;i++)
		{if (a[i]==x)
	return i;}
	return -1;
}
int main()
{
int a[]={1,2,3,4,5,6,7,8};
int x;
scanf("%d",&x);
int index=seqsearch(a,8,x);
if(index !=-1)
	printf("%d",index);
else
	printf("No. not found");
return 0;
}