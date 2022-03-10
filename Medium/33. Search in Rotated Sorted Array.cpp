class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=nums.size()-1;
        int f=0;
        while(f<=l){
            int mid=(f+l)/2;
            if(nums[mid]==target)
                return mid;
          if(nums[l]<=nums[mid]){
            if(target>= nums[f] && target< nums[mid] )
                l=mid-1;
              else
                  f=mid+1;
          } 
            else{
                if(target> nums[mid] && target<= nums[l]  )
                    f=mid+1;
              else
                  l=mid-1;
            }
        }
        return -1;
    }
};
