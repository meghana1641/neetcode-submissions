class Solution {
public:
    bool isAnagram(string s, string t) {

        int freq[26] = {0};

        int m = s.length();int n = t.length();
        if(m!=n) return false;

        for(int i=0;i<m;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
