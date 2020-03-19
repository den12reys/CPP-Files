#include<st./dio.h>

int main()
{
int *p;

int (*ptr)[5];
int arr[5];
scan
p=arr;

ptr=&arr;

printf("p=%p,ptr=%p",p,ptr);

p++;
ptr++;

printf("p=%p,ptr=%p\n",p,ptr);

return 0;
}

