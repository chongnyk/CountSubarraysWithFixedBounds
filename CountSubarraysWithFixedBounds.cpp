class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long result = 0;
        int invalidIdx = -1, minIdx = -1, maxIdx = -1;

        for(int i = 0; i < nums.size(); ++i){
            if(!(minK <= nums[i] && nums[i] <= maxK)) invalidIdx = i;

            if(nums[i] == minK) minIdx = i;

            if(nums[i] == maxK) maxIdx = i;

            result += max(0, min(minIdx, maxIdx) - invalidIdx);
        }
        return result;
    }
};
