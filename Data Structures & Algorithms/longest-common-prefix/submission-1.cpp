class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first=strs[0]; string last=strs[n-1];
        int sz=first.size(), i=0;
        while(i<sz) {
            if(first[i] == last[i]){
                i++;
            } else break;
        }
        return first.substr(0,i);
    }
};