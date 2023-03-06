class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=10000, max=0;
        for(int i:prices){
            if(min>i)min=i;
            if(max<i-min)max=i-min;
        }
        return max;
    }
};
