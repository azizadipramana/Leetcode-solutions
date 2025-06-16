class Solution {
public:
    bool isPalindrome(int x) { 
        string temp = to_string(x); 
        int i = 0; 
        int j = x.length() - 1; 
        while(j > i){
	        if(temp[i] !+ temp[j]){
		        return false;  
	        }
        i++
        j--
        }
        return true; 
    }
}
