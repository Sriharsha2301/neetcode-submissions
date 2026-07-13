class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=false;
        string m;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch>='0' && ch<='9' || ch>='A' && ch<='Z' ||ch>='a' && ch<='z'){
                flag =true;
                m+=tolower(s[i]);
            }
        }
                string s1 = m;
                 reverse(s1.begin(), s1.end());
               
                if(m==s1) return true;
        return false;
    }
};