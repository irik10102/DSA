#include<stdio.h>

int maxSubarray(int *nums, int numsSize){
	
	if(numsSize == 1)
		return nums[0];
	
	int maxsum, sum,i,j;
	
	maxsum=0;
	
	for(i=0;i<numsSize;i++){
		sum=nums[i];
		for(j=i+1;j<numsSize;j++)
		{
			if(sum>maxsum)
				maxsum=sum;
			sum+=nums[j];
		}
	}
	if(nums[numsSize -1]>0)
		maxsum+=nums[numsSize -1];
	
	return maxsum;
}

int main(){
	
	int nums[]={5,4,-1,7,8},r,s;
	
	s=sizeof(nums)/sizeof(int);
	r=maxSubarray(nums, s);
	
	printf("\n%d", r);
	
	return 0;
}
