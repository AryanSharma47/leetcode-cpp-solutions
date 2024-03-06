//Easy Approach || Simple Logic using Hash Table
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> v;

        for(auto i : nums)
          count[i]++;

        for(const auto& ind : count)
        {
            if(ind.second == 2)
            v.push_back(ind.first);
        }
        return v;
    }
};