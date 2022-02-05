class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=0;
        if(nums.size()==0)
            return 0;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i];
                j++;
            }
        }
        nums[j]=nums[nums.size()-1];
        return j+1;
    }
}
