class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
         unordered_set<int>numSet;
        for(int i=0;i<nums.size();i++)
        numSet.insert(nums[i]);
        for (const int num : nums)
      numSet.insert(reversed(num));

    return numSet.size();
  }

 private:
  int reversed(int num) {
    int ans = 0;
    while (num > 0) {
      ans = ans * 10 + num % 10;
      num /= 10;
    }
    return ans;
    }
};



// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/submissions/879481546/
