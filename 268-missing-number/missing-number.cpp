class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k = nums.size();
        int sum = (k*(k+1))/2;
        int temp=0;
        for(int i : nums)
            temp+=i;
        return sum-temp;
    }
};