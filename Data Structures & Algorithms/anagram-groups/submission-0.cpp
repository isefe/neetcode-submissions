class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

       result.push_back({strs[0]});

        for(int i=1 ; i<strs.size(); i++){
            bool found = false;
            for(int j=0 ; j<result.size(); j++){
                if(isAnagram(result[j][0], strs[i])){
                    result[j].push_back(strs[i]);
                    found = true;
                    break; }
            }
            if (!found) {
                result.push_back({strs[i]});
            }
        }
        return result;
    }
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
