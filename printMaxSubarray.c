/*Given an array nums, return a sub-array with sum of elements of sub-array consisting of maximum sum among other sub-arrays */
#include<stdio.h>
#include<stdlib.h>

int* maxSubarray(int *nums, int numsSize){
	int i, sum, maxsum, cnt, lindex, sindex, *arr;
	
	maxsum = -999999;
	cnt =0;
	sum=nums[0];
	
	
	for(i=0; i<numsSize; i++)
	{
		if(sum<0)
			sum=cnt=0;
		
		sum+=nums[i];
		cnt++;
		
		if(sum>maxsum){
			maxsum = sum;
			lindex = i;
			sindex = lindex - (cnt-1);
			//printf("count:%d sum:%d last index:%d\n",cnt, sum, lindex);
		}
		
	}
	printf("First index:%d , Last index: %d\n", sindex, lindex);
	
		
	arr=(int*)malloc((lindex-sindex +1)*sizeof(int));
	for(i=sindex; i<=lindex; i++)
	{
		arr[i-sindex] = nums[i];
		printf("%d ", arr[i-sindex]);
	}
	printf("\n");
	
	//printf("last index:%d & no of element in subarray:%d \n", lindex, lindex-sindex+1);
	return arr;
}

int main(){
	
	int nums1[]={2,3,5,-2,7,-4}, nums2[]={-2,-3,-7,-2,-10,-4},*arr1, *arr2,m,n,i;
	
	arr1=maxSubarray(nums1,sizeof(nums1)/sizeof(int));
	arr2=maxSubarray(nums2, sizeof(nums2)/sizeof(int));
	
	
	return 0;
}
	
	
	
	
		
		
		