class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        k = 0
        for num in range(1,len(nums)):
            if nums[num]!=nums[k]:
                k+=1
                nums[k]=nums[num]
        
        return k+1
