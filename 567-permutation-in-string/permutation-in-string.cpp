class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //Fixed Sliding Window
        unordered_map<char,int> mp;
        for(int i = 0; i< s1.size(); i++){
            mp[s1[i]]++;
        }
        unordered_map<char,int> wn;
        int k = s1.size();
        for(int i=0; i<s2.size(); i++){
            wn[s2[i]]++;
            if(mp==wn)
                return 1;
            if(i>=k-1){
                wn[s2[i-k+1]]--;
                if(wn[s2[i-k+1]]==0)
                    wn.erase(s2[i-k+1]);
            }
        }
        return 0;
    }
};