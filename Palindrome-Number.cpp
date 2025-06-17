class Solution {
public:
    bool isPalindrome(int x) { 
        string temp = to_string(x); 
        int i = 0;
        int j = temp.length();
        for(i; i < j; i++){
	        if(temp[i] != temp[j - i - 1] return false;
        }
        return true;
    }
};
