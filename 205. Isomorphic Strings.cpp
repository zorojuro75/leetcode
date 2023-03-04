class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        set <tuple<char, char>> st;
        set <char> st2;
        set <char> st3;
    for (int i = 0; i<s.size(); i++)
    {
        st.insert(make_tuple(s[i],t[i]));
        st2.insert(s[i]);
        st3.insert(t[i]);
    }
    if(st.size()==st2.size() && st.size()==st3.size())return true;
    return false;
        
    }
};
