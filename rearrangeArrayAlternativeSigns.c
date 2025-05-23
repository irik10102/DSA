#include<stdio.h>
#include<stdlib.h>

int* rearrangeArray(int* nums, int numsSize){
	
	int *arr, i,j,k,p;
	
	arr=(int*)malloc(numsSize*sizeof(int));
	i=j=k=0;
	
	while(k<numsSize)
	{
		if(nums[i] < 0)              /* i is positive*/
			i++;
		else
		{
			if(nums[j] >= 0)         /*j is negative*/
				j++;
			
			else
			{
				//printf("+ve:%d ", nums[i]);
				arr[k++] = nums[i++];
				//printf("-ve:%d ", nums[j]);
				arr[k++] = nums[j++];
				//printf("\n");
				
				
			}
		}
	}
	
	return arr;
}

int main(){
	
	int nums1[]={2,4,5,-1,-3,-4}, nums2[]={1,-1,-3,-4,2,3}, m,n, *arr1, *arr2,i;
	
	m = sizeof(nums1)/sizeof(int);
	n = sizeof(nums2)/sizeof(int);
	
	arr1=rearrangeArray(nums1, m);
	printf("\n");
	arr2=rearrangeArray(nums2, n);
	
	for(i=0;i<m; i++)
		printf("%d ", arr1[i]);
	
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", arr2[i]);
	
	return 0;
}