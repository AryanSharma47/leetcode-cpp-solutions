#include<bits/stdc++.h>
class Solution {
public:
  int searchInsert(vector<int>& v, int target) {
        int l=0;
        int r=v.size()-1;
        while(l<=r)
        {
        int mid=l+(r-l)/2;
        if(v[mid]==target)
        return mid;

        else if(v[mid]<target)
        l=mid+1;
        
        else
        r=mid-1;
        }
        return l;
    }
};