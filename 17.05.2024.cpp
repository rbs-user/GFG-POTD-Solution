// 17.05.2024 gfg potd solution
class Solution 
{
  public:
    int findPair(int n, int x, vector<int> &arr) 
    {
        unordered_set<int> seen;

        for (int i = 0; i < n; i++)
        {
            if (seen.find(arr[i] - x) != seen.end() || seen.find(arr[i] + x) != seen.end())
            {
                return 1;
            }
            seen.insert(arr[i]);
        }
        return -1;
    }
};
