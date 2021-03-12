class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            flag++;
        else if(s[i]=='L')
        flag--;
        if(flag==0) 
        count++;
        }
    return count;
}
};
