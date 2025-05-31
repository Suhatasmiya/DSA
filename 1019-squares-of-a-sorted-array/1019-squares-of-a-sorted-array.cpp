class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int> squ(n);
        for(int i=n-1;i>=0;i--){
            int s=0;
            if(abs(nums[l]) < abs(nums[r])) {
                s = nums[r] * nums[r];
                r--;
            } else {
                s = nums[l] * nums[l];
                l++;
            }
            squ[i] = s;
        }
        return squ;
    }
};