def majorityElement(nums):

    count = dict()
    for i in nums:
        count[i]=0
        
    for i in nums:
        count[i] += 1
        
        
    m = len(nums)//2
    
    for i in count.keys():
        if(count[i] >= m):
            return i
            
if __name__ == "__main__":

    nums1=[7,0,0,1,7,7,2,7,7]
    nums2=[1,1,1,2,1,2]
    
    print("Majority element of ", nums1," is:\t", majorityElement(nums1))
    print("Majority element of ", nums2," is:\t", majorityElement(nums2))
    
    
