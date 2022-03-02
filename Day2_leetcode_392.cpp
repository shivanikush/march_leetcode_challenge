//two pointer approach

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int p1 = 0;
        int p2 = 0;
        
        while(p1<n && p2<m){
            if(s[p1] == t[p2]){
                p1++;
            } 
            p2++;
        }
        return p1 == n? 1:0;
        
    }
};
