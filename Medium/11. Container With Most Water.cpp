class Solution {
public:
    int maxArea(vector<int>& height) {
         int n=height.size();
        int m=INT_MIN;
        int i=0,j=n-1;
        while(i<j) {
            int h=min(height[i],height[j]);
            m=max(m,h*(j-i));
            if(height[i]<=h)i++;
            if(height[j]<=h)j--;
        }
        return m; 
    }
};
