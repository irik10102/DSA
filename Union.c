#include<stdio.h>
#include<stdlib.h>

int* Union(int arr1[], int arr2[], int m, int n, int *len)
{
	int i,j,k,*arr3;
	
	i=j=k=0;
	arr3=(int*)malloc((m+n)*sizeof(int));
	
	while(j<m&&k<n)
	{
		if(arr1[j]<=arr2[k])
		{
			if( i == 0)
			{
				arr3[i] = arr1[j];
				printf("Selecting %d for 0 index from first array\n", arr3[i]);
			}
			
			else
				if(arr3[i-1] != arr1[j])
				{
					arr3[i] = arr1[j];
					printf("Selecting %d from first array\n", arr3[i]);
				}
				
			j++;
		}
		
		else
		{
			if (i == 0)
			{
				arr3[i] = arr2[k];
				printf("Selecting %d for 0 index from second array\n", arr3[i]);
			}
			
			else
				if(arr3[i-1] != arr2[k])
				{
					arr3[i] = arr2[k];
					printf("Selecting %d from second array\n", arr3[i]);
				}
				
			k++;
		}
		//printf("selecting: %d for index:%d\n", arr3[i], i);
		
		i++;
	}
	
	while(j<m)
	{
		if(arr3[i-1] != arr1[j])
			arr3[i++] = arr1[j];
		j++;
		printf("%d ", arr3[i]);
		
	}
	
	while(k<n)
	{
		if(arr3[i-1] != arr2[k])
			arr3[i++] = arr2[k];
		
		k++;
		printf("%d ", arr3[i]);
		
	}
	printf("\n");
	*len = i;
	return arr3;
}

int main()
{
	int num1[]={3,4,6,7,9,9} , num2[]={1,5,7,8,8}, *num3, x,i,m,n;
	
	m=sizeof(num1)/sizeof(int);
	n=sizeof(num2)/sizeof(int);
	
	num3=Union(num1, num2, m,n,&x);
	for(i=0;i<m;i++)
		printf("%d ", num1[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", num2[i]);
	printf("\n");
	for(i=0; i<x; i++)
		printf("%d ",num3[i]);
	
	return 0;
}