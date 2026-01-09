class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> ans(l,0);
        int prefix=1,postfix=1;
        for(int i=0; i<l; i++){
            ans[i]=prefix;
            prefix=prefix*nums[i];
        }
        for(int i=l-1; i>=0; i--){
            ans[i]*=postfix;
            postfix=postfix*nums[i];
        }
        return ans;
    }
};