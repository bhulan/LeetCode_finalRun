class Solution {
public:
    string countAndSay(int n) {
          string str="1",res="";
            int j=0,count=0;
        for(int i =1;i<n;i++){
            char temp = str[0];
            j=0;res = "";count = 0;
            while(j<=str.size()){
                
                if(temp==str[j]){
                    count++;
                }
                else{
                    res = res+to_string(count)+temp;
                    temp = str[j];
                    count = 0;
                    j--;
                }
                 j++;   
            }
            str = res;
            
        }
         return str;
    }
};
