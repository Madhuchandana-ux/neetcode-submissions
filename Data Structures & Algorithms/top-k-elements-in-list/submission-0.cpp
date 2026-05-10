class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>a;
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;

        }
        priority_queue<pair<int,int>>qp;
        for(auto &p:mp)
        {
            qp.push({p.second, p.first});
        }
        while(k-- > 0 && !qp.empty()){
            a.push_back(qp.top().second);
            qp.pop();
        }
        return a;
    }
};
