#include<stdio.h>

int sum_of_elements(int arr[],int n)
{
	int i=0,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
	
	
}
main()
{
	int total=0;
	int array[10]={11,92,83,74,15,26,37,48,69};
	
	total=sum_of_elements(array,9);
	
	printf("\n the sum of elements:%d",total);
	
	return 0;
}
