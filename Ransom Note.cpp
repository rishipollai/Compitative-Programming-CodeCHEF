class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c[26]={};int cp[26]={};
        for(char x:ransomNote)
            c[x-'a']++;
        for(char x:magazine)
            cp[x-'a']++;
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(c[i]<=cp[i])
                cnt++;
        }
        if(cnt==26)
            return true;
        else
            return false;
        
        
    }
};
