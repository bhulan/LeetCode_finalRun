class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>map;
       int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             map[nums[i]]++;
        }
        for(auto it:map){
            if(it.second==1)
            ans= it.first;
        }
        return ans;
    }
};
