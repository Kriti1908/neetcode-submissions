class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans=strs[0]; int sz=ans.size();
        int n = strs.size();
        for(int i=1; i<n; i++) {
            if(strs[i].find(ans) == 0) continue;
            else {
                if(sz) {
                    ans.erase(sz-1,1);
                    i--;
                    sz--;
                }
                else return "";
            }
        }
        return ans;
    }
};