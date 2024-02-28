//Beats 90% users || Easy Approach || Efficient Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> set;
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        int s=nums.size();
       
        for(int i=0;i<s-1;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            continue;   //To remove same triplets which include same first element

           int low=i+1,high=s-1;
           while(low<high)
           {
               int sum=nums[i]+nums[low]+nums[high];
               if(sum==0)
               {
                v.push_back({nums[i],nums[low],nums[high]});
                low++;high--;
                
                //To Remove Duplicates
                while(low<high && nums[low]==nums[low-1])
                low++;

                while(low<high && nums[high]==nums[high+1])
                high--;

                //Or we can use set instead of these loops
               }
               else if(sum>0)
               {
               high--;
               }
               else
               {
                low++;
               }
           } 
        } 
        return v;       
    }
};