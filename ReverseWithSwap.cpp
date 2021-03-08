class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        char ch='a';
        for(int i=0;i<n/2;i++){
            ch=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=ch;
            
        }
        // for(auto x:s)
        //      cout<<x<<" ";
    
        
       }
};
