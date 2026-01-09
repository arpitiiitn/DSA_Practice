class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        int lcs=1;
        int ccs=1;
        for(int i : s){
            if(s.find(i-1)!=s.end()){
                continue;
            }
            while(s.find(i+1)!=s.end()){
                ccs++;
                i++;
            }
            lcs=max(lcs,ccs);
            ccs=1;
        }
        return lcs;
    }
};