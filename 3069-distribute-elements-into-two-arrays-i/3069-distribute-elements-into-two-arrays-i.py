class Solution:
    def resultArray(self, nums: List[int]) -> List[int]:
        ans1=[nums[0]]
        ans2=[nums[1]]
        for i in range(2,len(nums)):
            if ans1[-1] > ans2[-1]:
                ans1.append(nums[i])
            else:
                ans2.append(nums[i])    
        return ans1 + ans2