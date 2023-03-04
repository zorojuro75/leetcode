class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())return false;
        if(s.size()==0)return true;
        int k=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[i])k++;
            if(k==s.size())return true;
        }
        return false;
    }
};
