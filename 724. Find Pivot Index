class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        int pivot=0;

        while(pivot!=nums.size()){
            for(int i=0;i<pivot;i++){
                left+=nums[i];
            }
            for(int i=pivot+1;i<nums.size();i++){
                right+=nums[i];
            }
            if(left==right)return pivot;
            left=right=0;
            pivot++;
        }
        return -1;
    }
};
