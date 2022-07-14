class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int a_pointer = 0;
        int b_pointer = numbers.size() - 1;
        vector<int> ans;
        
        while(a_pointer <= b_pointer)
        {
            int sum =  numbers[a_pointer] + numbers[b_pointer];
            
            if(sum > target) { b_pointer -= 1; }
            else if(sum < target) { a_pointer += 1; }
            else 
            { 
                ans.push_back(a_pointer + 1);
                ans.push_back(b_pointer + 1);
                break;
            }
        }
        return ans;
    }
};