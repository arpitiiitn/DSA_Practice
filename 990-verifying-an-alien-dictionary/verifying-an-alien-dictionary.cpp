class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        int i=0;
        for(auto c : order){
            mp[c]=i;
            i++;
        }
        for(int j=0; j<words.size()-1; j++){
            string s1 = words[j];
            string s2 = words[j+1];
            int l1=s1.size();
            int l2=s2.size();
            bool flag = false;
            for(int k=0,l=0; k<l1; k++,l++){
                if(mp[s1[k]]==mp[s2[l]]){
                    continue;
                }
                else if (mp[s1[k]]<mp[s2[l]]){
                    flag=true;
                    break;
                }
                else{
                    return false;
                }
            }
            if(flag==false && l1>l2)
                return false;
        }
        return true;
    }
};