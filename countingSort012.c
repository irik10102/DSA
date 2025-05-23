/*Given an array of nums consisting of only 0,1 and 2. Sort tge array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array*/

#include<stdio.h>

void sort012(int* nums, int n){
	
	int count[3],i,j;
	
	for(i=0;i<3;i++)
		count[i]=0;
	
	for(i=0;i<n;i++)
		count[nums[i]]++;
	
	j=0;
	for(i=0;i<3;i++)
		while(count[i] > 0)
		{
			nums[j]=i;
			count[i]--;
			j++;
		}
}

int main(){
	
	int nums1[]={1,0,2,1,0,0,0,0,1,2,2,2,1,1,2,0}, nums2[]={0,0,1,1,1},m,n,i;
	
	m=sizeof(nums1)/sizeof(int);
	n=sizeof(nums2)/sizeof(int);
	
	sort012(nums1, m);
	sort012(nums2, n);
	
	printf("Nums1 after sorting:-\n");
	for(i=0;i<m;i++)
		printf("%d ", nums1[i]);
	
	printf("\nNums2 after sorting :-\n");
	for(i=0;i<n;i++)
		printf("%d ", nums2[i]);
	
	return 0;
}
	