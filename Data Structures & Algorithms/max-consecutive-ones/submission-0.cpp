class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int current=0;
        int best=0;
        while (i< nums.size()){
            if (nums[i] == 1) {
                current++;
            } else {
                best = max(best,current);
                current=0;
            }
            i++;
        }
        best = max(best, current);
        return best;
    }
};