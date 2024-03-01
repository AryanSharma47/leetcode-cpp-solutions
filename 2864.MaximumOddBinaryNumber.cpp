//Easiest Solution || Time Complexity : O(n log n)
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end());
        s.erase(s.end()-1);
        reverse(s.begin(),s.end());
        s.insert(s.end(),'1');
        return s;
    }
}; 

//Second Approach
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end(),greater<int>()); // Sort in descending order
        for(int i=s.size()-1;i>=0;i--)
            if(s[i]=='1')
            swap(s[i],s[s.size()-1]);
        
        return s;
    }
};
