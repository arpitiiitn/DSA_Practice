class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size())
        //     return false;
        // multiset<int> set;
        // for(char c : s)
        //     set.insert(c);
        // for(char c : t){
        //     auto it = set.find(c);
        //     if(it == set.end())
        //         return false;
        //     set.erase(it);
        // }
        // return true;
        if(s.size()!=t.size()){
            return false;
        }
        int freq[26] = {0};
        for(char c : s){
            freq[c-'a']++;
        }
        for(char c : t){
            freq[c-'a']--;
        }
        for(int i = 0; i<26; i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};