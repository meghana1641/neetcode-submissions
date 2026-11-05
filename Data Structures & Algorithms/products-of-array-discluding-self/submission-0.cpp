class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {

        int n = a.size();
        int c=0;int ind=0;int ans=1;
        for(int i=0;i<n;i++){
            if(c<=1 && a[i]==0){
            c++;
            ind = i;
            }
            else if(c<=1){
                ans*=a[i];
            }
            else
            break;
        }
        vector<int> res(n,0);

        if(c>1){
            //res[n] ={0};
            return res;
        }
        if(c==1){
           // res[n] ={0};
            res[ind] = ans;
            return res;
        }
        for(int i=0;i<n;i++){
            res[i] = (ans/a[i]);
        }
        return res;


    }
};
