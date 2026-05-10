class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> dup(nums.begin(), nums.end());
        return dup.size() != nums.size();
    }
};