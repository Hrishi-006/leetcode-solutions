//Time complexity O(n)
//Space complexity O(1)



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=-1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                j = i;
                break;
            }
        }
        if(j==-1) return nums.size();
        int k=1;
        for (int i = j + 1; i < nums.size(); i++) {
            // If current element is non-zero
            if (nums[i]==val){
                k++;
            }
            if (nums[i] != val) {
                // Swap with nums[j]
                swap(nums[i], nums[j]);
                // Move j to next zero
                j++;
            }
        }
        return nums.size()-k;
    }
};
