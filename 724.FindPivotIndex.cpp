//Simple Approach
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum = accumulate(nums.begin(),nums.end(),0);
       int leftSum = 0;

       for(int i=0;i<nums.size();i++)
       {
          sum -= nums[i];

          if(sum == leftSum)
          return i;

          leftSum += nums[i];
       } 
       return -1;
    }
};