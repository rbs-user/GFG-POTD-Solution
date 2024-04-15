// 15.04.2024 gfg potd solution
class Solution {
public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
        sort(b.begin(), b.end());
        vector<int> ans;
        ans.reserve(q); // Reserve memory for the result vector to avoid dynamic resizing
        
        for (int i = 0; i < q; ++i) {
            int count = upper_bound(b.begin(), b.end(), a[query[i]]) - b.begin();
            ans.push_back(count);
        }
        return ans;
    }
};
