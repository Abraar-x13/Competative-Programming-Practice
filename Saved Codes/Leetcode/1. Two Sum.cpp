class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map <int, int> m;
        vector<int> ans; 
        int p; auto itr = nums.begin(); 
        for(itr = nums.begin(), p=0; itr!= nums.end(); ++itr, p++)
        {
            int diff = target - (*itr);
            if (m.find(diff) != m.end())
            {
                ans.push_back(m[diff]);                
                ans.push_back(p);
                break;
            }
            else
            {
                m.insert(make_pair((*itr), p));
            }
        }
        return ans;
    }
};