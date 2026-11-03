class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
vector<int>res;
        unordered_map<int,int>hp;
        int n = a.size();

        for(int i=0;i<n;i++){
            if(hp.find(k-a[i])!=hp.end() && i!=hp[k-a[i]])
           {
                 res.push_back(hp[k-a[i]]);
                res.push_back(i);
                break;
           }
            else

            hp[a[i]] = i;

        
        }
        return res;
    }
};
