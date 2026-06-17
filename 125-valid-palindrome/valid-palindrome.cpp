class Solution {
public:
    bool convert(char ch)
    {
        return (ch>='A' && ch<='Z');// uppercase

    }
    bool checkAlphanumeric(char ch)
    {
        return ((ch>='A'  && ch <='Z') || (ch>='a'  && ch <='z') || (ch >= '0' && ch<= '9') );
        
    }
    bool isPalindrome(string s) 
    {
        int i = 0;
        int j = s.length()-1;
        while(i<j)
        {
            if(!checkAlphanumeric(s[i]))i++;// left inalid
            else if(!checkAlphanumeric(s[j]))j--;// right invalid
            // both valid
            // check in lowercase
            else{
                char ch1 = s[i];
                if(convert(ch1))
                {
                    ch1 += 32;
                }
                i++;
                char ch2 = s[j];
                 if(convert(ch2))
                {
                    ch2 += 32;
                }
                j--;
                 if(ch1 != ch2) return false;
            }
           
        }
        
        return true;
    }
};