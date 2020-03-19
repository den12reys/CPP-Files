#include<iostream>
using namespace std;

int main()
{
int arr[5]={1,2,3,4,5,};
int left=0,right=4,temp;
while(left<right)
{
temp=arr[left];
arr[left]=arr[right];
arr[right]=temp;
left++;
right--;
}
for (int i = 0; i <5; ++i)
{
	cout<<" "<<arr[i];
}
	return 0;
}


