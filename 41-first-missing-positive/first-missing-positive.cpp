class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k = nums.size()+1;
        vector<int>arr(k,0);
        for(int i = 0; i<k-1 ; i++){
            if(nums[i]>0 && nums[i]<=nums.size()){
                arr[nums[i]]=1;
            }
        }
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==0){
                return i;
            }
        }
        return nums.size()+1;

    }
};