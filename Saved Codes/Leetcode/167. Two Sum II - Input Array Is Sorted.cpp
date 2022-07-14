class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map <int, int> mp; int k = 0;
        vector<int> ans;
        for(int val : numbers)
        {
            if(mp.find(target-val) != mp.end())
            {
                ans.push_back(mp[target-val]+1);                                     ans.push_back(k+1);
                break;
            }
            mp.insert(make_pair((val), k));
            k++;
        }
        return ans;
    }
};