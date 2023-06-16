class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,hi=nums.size()-1;
        
        if(nums[low]<=nums[hi]){
            return nums[low];
        }
        
        while(low<=hi){
            int mid=low+(hi-low)/2;
            
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            if(nums[mid]< nums[mid-1]){
                return nums[mid];
            }
            if(nums[low]<nums[mid]){
                low=mid+1;
            }else if(nums[mid]<= nums[hi]){
                hi=mid-1;
        
            }
            
        }
        return -1;
    }
};