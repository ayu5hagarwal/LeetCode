class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int index;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum1 += nums[i];
    }
    
    for (int i = 0; i <= nums.size(); i++)
    {
       sum2 += i;
    }
    return sum2 - sum1;
    }
};