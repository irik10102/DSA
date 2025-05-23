#include<stdio.h>
#include<stdlib.h>
#define BOOL int

int lcsArray(int *nums, int numsSize)
{
  int i,j,count,maxCount, lastEle, next;
  
  BOOL *flag;
  
  flag=(BOOL*)malloc(numsSize*sizeof(int));
  for(i=0;i<numsSize;i++)
    flag[i] = 0;
  
  maxCount=1;
  for(i=0; i<numsSize; i++)
  {
    count=1;
    lastEle=nums[i];
    j=0;
    while(j<numsSize)
    {
      next=lastEle+1;
      //printf(" for i:%d & j:%d & lastEle:%d next: %d nums[j]:%d & count:%d\n",i ,j , lastEle ,next , nums[j], count);
      if(nums[j] == next&&flag[j]==0)
      {
        lastEle=next;
        flag[j]=1;
        count++;
        j=0;
        continue;
      }
      j++;
    }
    if(maxCount<count)
      maxCount=count;
  }
  return maxCount;
}

int main()
{
  int nums1[]={100,200,1,3,2,4},nums2[]={3,8,5,7,6},r1,r2,m,n;
  
  m = sizeof(nums1)/sizeof(int);
  n = sizeof(nums2)/sizeof(int);
  
  r1=lcsArray(nums1, m);
  r2=lcsArray(nums2, n);
  
  printf("%d %d\n",r1,r2);
  
  return 0;
}
