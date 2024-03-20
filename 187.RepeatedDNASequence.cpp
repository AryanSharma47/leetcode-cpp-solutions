//Easiest Approach || USing Hash Table
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        unordered_map<string,int> mp;
        vector<string> v;

        for(int i=0;i<n;i++)
        {
            string ans=s.substr(i,10);
            mp[ans]++;
        }

        for(auto num : mp)
        {
            if(num.second > 1)
            v.push_back(num.first);
        }
        return v;
    }
};
