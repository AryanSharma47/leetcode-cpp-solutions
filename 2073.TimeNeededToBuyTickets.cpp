//Simple Approach
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int n=tickets.size();

        while(tickets[k] > 0)
        {
            for(int i=0;i<n;i++)
            {
                if(tickets[i] != 0)
                {
                    count++;
                    tickets[i]-=1;
                }
                if(tickets[k] == 0)
                break;
            }
        }
        return count;
    }
};