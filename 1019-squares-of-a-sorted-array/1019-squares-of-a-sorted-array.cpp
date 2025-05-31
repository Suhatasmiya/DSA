class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> squ;
        for(int i=0;i<n;i++){
            int s=nums[i]*nums[i];
            squ.push_back(s);

        }
        sort(squ.begin(),squ.end());
        return squ;
    }
};