class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sol;
        for(int i =0; i<nums.size();i++){
            if(i!=0)sol.push_back(nums[i]+sol[i-1]);
            else sol.push_back(nums[i]);
        }
        return sol;
    }
};
