class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        for (int i=0 ; i<s.size(); i++){
            for(int j=0 ; j<t.size(); j++){
                if(s[i] == t[j]){
                    t.erase(t.begin() +j);
                    break;
                }
            }
        }
        if(t.empty())
            return true;
        return false;
    }
};
