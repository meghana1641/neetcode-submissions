class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {

        int n = a.size();
        int pre=1,post=1;
        vector<int>res(n,1);
        for(int i=0;i<n;i++){
            res[i]*= pre;
            pre*=a[i];
        }

        for(int i=n-1;i>=0;i--){
            res[i]*=post;
            post*=a[i];
        }

        return res;

    }
};
