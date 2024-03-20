//Easiest Approach 
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        for(auto i : s)
        mp[i]++;

        for(auto i : t)
        {
            if(mp[i])
              mp[i]--;

            else
              mp[i]++;
        }

        for(const auto& num : mp)
        {
            if(num.second > 0)
            return false;
        }
        return true;
    }
};