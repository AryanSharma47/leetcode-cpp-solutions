//Easiest Approach || SImple Sorting 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();

        for(int i=0;i<n;i++)
        {
            int first=intervals[i][0];
            int second=intervals[i][1];
            while(i<n-1 && second >=intervals[i+1][0])
            {
                second=max(second,intervals[i+1][1]);
                i++;
            }
            merged.push_back({first,second});
        }
        return merged;
    }
};
