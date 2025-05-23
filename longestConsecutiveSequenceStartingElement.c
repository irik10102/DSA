#include<stdio.h>

int lcsArray(int*nums, int numsSize)
{

  int i, j, count, maxCount, flag, ele, next;
  
  maxCount=1;
  
  for(i=0; i<numsSize; i++)
  {
    flag=0;
    for(j=0; j<numsSize; j++) /* This loop finds if the number(nums[i]) is a starting element which means there should not exist nums[i] - 1 element in the array*/
    {
      //printf("%d != %d : %d\n", nums[i] - 1,nums[j],nums[i] - 1 != nums[j]);
      if(nums[i] - 1 != nums[j])
        flag = 1;
        
      else
      {
        flag = 0;
        break;
      }
    }
    
    if(flag == 1)          /*On the basis of starting element we search for next consecutive element while increasing the count if found and at last we compare it with current greatest consecutive length found so far*/
    {
      //printf("Potential Starting Element: %d\n", nums[i]);
      count = 1;
      j=0;
      next = nums[i]+1;
      while(j<numsSize)
      {
        //printf("nums[j]:%d == next:%d : result:%d count:%d \n ", nums[j], next, nums[j],count);
        if(nums[j] == next)
        {
          next = next + 1;
          count++;
          j=0;
          continue;
        }
        j++;
      }
      if(count>maxCount)
        maxCount = count;
    }
  }
  
  return maxCount;
}

int main()
{
  int nums[]={100,200,1,3,2,5,4}, r;
  
  r =lcsArray(nums, 7);
  printf("%d\n", r);
  
  return 0;
}
  
  
  
        
