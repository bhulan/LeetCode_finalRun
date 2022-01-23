class Solution {
public:
    bool isPalindrome(int x) {
        long long int t=0;
          long long int p=x;
        if(x<0){
            return false;
        }
        else{
            while(x!=0){
                int r=x%10;
                t=t*10+r;
                x=x/10;
            }
        }
        if(p==t)
            return true;
    else 
        return false;
    }
};
