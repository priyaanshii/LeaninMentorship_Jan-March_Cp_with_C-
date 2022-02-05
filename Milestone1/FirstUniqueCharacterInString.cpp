class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};
        int i;
        for(char c:s)
        {
            count[c-'a']++;
        }
        for(i=0;i<s.length();++i)
        {
            if(count[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
    
};
