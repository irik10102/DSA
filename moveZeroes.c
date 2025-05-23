#include<stdio.h>

void moveZeroes(int *nums, int n)
{
	if(n<=1)
		return;
	
	if(n == 2)
		if(nums[0] == 0)
		{
			nums[0] = nums[1];
			nums[1] = 0;
			return;
		}
		
	int i,j;
	
	i=j=0;
	
	while(i<n)
	{
		if(nums[j] != 0)
			j++;
		
		else
		{
			if(nums[i] != 0)
			{
				nums[j] = nums[i];
				nums[i] = 0;
			}
			
			else
				i++;
		}
	}
}

int main()
{
	int nums1[]={0,1,0,3,12,7,8,0,0,12}, nums2[]={0},i,m,n;
	
	m=sizeof(nums1)/sizeof(int);
	n=sizeof(nums2)/sizeof(int);
	
	moveZeroes(nums1, m);
	moveZeroes(nums2, n);
	
	printf("First array:-\n");
	for(i=0;i<m;i++)
		printf("%d ", nums1[i]);
	
	printf("\nSecond array:-\n");
	for(i=0;i<n;i++)
		printf("%d ",nums2[i]);
	
	return 0;
}