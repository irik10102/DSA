#include<stdio.h>

int maximumConsecutiveOnes(int nums[], int n)
{
	int count, pcount,i;
	
	i=count=pcount=0;
	while(i<n)
	{
		if(nums[i] == 1)
			count++;
		
		else
		{
			if(pcount<count)
				pcount = count;
			
			count=0;
		}
		i++;
	}
	
	return pcount;
}

int main(){
	
	int nums1[]={1,1,0,0,1,1,1,0,0,0,1,1,1,1,0}, nums2[]={0,0,0,0,1,0,0,0,0,0}, res1, res2;
	
	res1=maximumConsecutiveOnes(nums1, sizeof(nums1)/sizeof(int));
	res2=maximumConsecutiveOnes(nums2, sizeof(nums2)/sizeof(int));
	
	printf("%d %d", res1, res2);
	
	return 0;
}
	
	