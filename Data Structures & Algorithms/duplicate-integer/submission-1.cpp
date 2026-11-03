class Solution {
public:
    bool hasDuplicate(vector<int>& a) {

        int n = a.size();
        unordered_map<int,int>hp;
        for(int i=0;i<n;i++){

            if(hp.find(a[i])==hp.end()){
                hp[a[i]]++;
            }
            else return true;
        }
        return false;
        
    }
};