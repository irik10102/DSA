def longestSubarray(nums, k)->int :

    maxlen=0
    for i in range(len(nums)):
        j=i
        sum1=leng=rem=0
        for j in range(len(nums)):
            if(sum1 + nums[j] <k):
                sum1+=nums[j]
                rem = k-sum1
                leng+=1

            elif(sum1 + nums[j] == k):
                leng+=1
                sum1+=nums[j]
                break

            else:
                if rem in nums:
                    sum1+=rem
                    leng+=1
                    break
                continue

        if(maxlen<leng):
            maxlen = leng

    return maxlen

if __name__ == "__main__":

    nums1,k1=[2,3,5],5
    nums2,k2=[2,3,5,1,9],10
    nums3,k3=[1,2,3,4,5],10

    print("Longest Subarray for ", nums1," is:\t", longestSubarray(nums1, k1))
    print("Longest Subarray for ", nums2," is:\t", longestSubarray(nums2, k2))
    print("Longest Subarray for ", nums3," is:\t", longestSubarray(nums3, k3))


    
