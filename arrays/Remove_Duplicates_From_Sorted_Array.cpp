//Time complexity:O(n)
//Space complecity: O(n)


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> num2;
        num2.push_back(nums[0]);
        int a=1;
        for (int i=1;i<nums.size();i++){
            if(nums[i]!=num2[a-1]){
                num2.push_back(nums[i]);
                a++;
            }
        }
        for (int j=0;j<a;j++){
            nums[j]=num2[j];
        }
        return a;
    }
};

