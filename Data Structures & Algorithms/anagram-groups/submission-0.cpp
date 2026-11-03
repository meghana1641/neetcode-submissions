class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {

        unordered_map<string,vector<string>>mp;

        int n = s.size();
        
        for(int i=0;i<n;i++){
            string dum = s[i];
            sort(dum.begin(),dum.end());

            if(mp.find(dum)==mp.end()){
                mp[dum].push_back(s[i]);
            }

            else{
                mp[dum].push_back(s[i]);
            }
        }
            vector<vector<string>>res;

            for(auto it :mp){
                res.push_back(it.second);
            }
            return res;

    }
};
