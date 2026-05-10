class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);

        int product = 1;
        int zeroCount = 0;

        // Step 1: Calculate product of non-zero elements and count zeros
        for (int num : nums) {
            if (num == 0) {
                zeroCount++;
            } else {
                product *= num;
            }
        }

        // Step 2: Handle cases
        if (zeroCount > 1) {
            // More than one zero → all results are zero
            return result;
        }

        for (int i = 0; i < n; i++) {
            if (zeroCount == 0) {
                // No zero → normal division
                result[i] = product / nums[i];
            } else {
                // Exactly one zero → only that position gets product
                if (nums[i] == 0) {
                    result[i] = product;
                } else {
                    result[i] = 0;
                }
            }
        }

        return result;
    }
};