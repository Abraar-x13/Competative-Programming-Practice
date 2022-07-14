class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set <int> s;
        for(int val : nums)
        {
            if(s.find(val) != s.end())
            {
                return true;
            }
            else
            {
                s.insert(val);
            }
        }
        return false;
    }
};