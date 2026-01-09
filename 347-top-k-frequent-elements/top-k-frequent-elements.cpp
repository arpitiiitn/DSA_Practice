class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(auto t : nums){
            mp[t]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        for(auto t : mp){
            pq.push({t.second,t.first});
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.empty()!=1){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};