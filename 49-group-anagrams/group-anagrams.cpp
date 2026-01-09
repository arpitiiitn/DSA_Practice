class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(auto t : strs){
            vector<int> temp(26,0);
            for(char c : t){
                temp[c-'a']++;
            }
            mp[temp].push_back(t);
        }
        vector<vector<string>> ans;
        for(auto t : mp){
            ans.push_back(t.second);
        }
        return ans;
    }
};