class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {

        int n=a.size();
        priority_queue<pair<int,int>>pq;

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }

        for(auto it:mp){
            pq.push({it.second,it.first});
            // pq.push({it.first});
        }
         vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;



        
    }
};
