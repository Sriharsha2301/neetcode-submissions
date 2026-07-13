class Solution {
public:

    string encode(vector<string>& strs) {
        string s2="";
    for(int i=0;i<strs.size();i++){
        // s+=strs[i].length();
        s2+=strs[i];
        s2+="g9";
    }
    return s2;
    }

    vector<string> decode(string s) {
        int n=s.size();
        vector<string> s1;
        string curr="";
        int i=0;
        while(i<n-1){
            if(s[i]!='g' || s[i+1]!='9'){
            curr+=s[i];
            i+=1;
        }
        else{
            s1.push_back(curr);
            curr="";
            i+=2;
        }
        }
    return s1;
    }
};
