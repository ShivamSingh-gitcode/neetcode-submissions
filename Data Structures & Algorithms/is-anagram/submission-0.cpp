class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size() != t.size()) 
            return false;
        unordered_map<char,int>mp;
        unordered_map<char,int>np;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            np[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]] != np[s[i]])
              return false;
        }
        return true;
    }
};
