#include<stdio.h>

int main()
{
int a[2][2],b[2][2],c[2][2],d[2][2],e[2][2];
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{scanf("%d",&a[i][j]);}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{printf("%d",a[i][j]);}
}
printf("\n");
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{d[i][j]=a[j][i];
			printf("%d",d[i][j]);}
}

for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{scanf("%d",&b[i][j]);}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{printf("%d",b[i][j]);}
}
printf("\n");
//matrix multiplication
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
		{e[i][j]=0;
			for(int k=0;k<2;k++)
				{e[i][j]+=a[i][k]*b[k][j];}
		}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{printf("%d",e[i][j]);
printf(" ");
    }
}
printf("\n");
//matrix addition
for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
		{c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);}
}


return 0;
}