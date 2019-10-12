class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isAlphanumeric(s[left]))left++;
            else if(!isAlphanumeric(s[right]))right--;
            else if((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32){
                return false;
            }
            else {
                left++;
                right--;
            }

            // if(s[left]==s[right]||s[left]-s[right]==32||s[left]-s[right]==-32){
            //     left++;
            //     right--;
            // }
            // else return false;
            //这里不能这样写，因为会出现数字与字母判定为相同的情况
            
        }
        return true;
    }
    bool isAlphanumeric(char &c){
        if(('a'<=c&&c<='z')||('A'<=c&&c<='Z')||('0'<=c&&c<='9'))return true;
        else return false;
    }
};