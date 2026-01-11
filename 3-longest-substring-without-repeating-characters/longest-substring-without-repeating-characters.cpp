class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        int i=0,ans=0;
        for(int j = 0; j<s.size(); j++){
            while(se.find(s[j])!=se.end() && i<j){
                se.erase(s[i]);
                i++;
            }
            se.insert(s[j]);
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};