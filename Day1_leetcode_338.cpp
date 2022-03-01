class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            int p = __builtin_popcount(i);  // just used STL function 
            ans.push_back(p);
        }
        return ans;
    }
};
