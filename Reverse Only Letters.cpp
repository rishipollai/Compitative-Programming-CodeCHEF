class Solution {
public:
    string reverseOnlyLetters(string S) {

       string s;
       for(auto x:S)
       {
           if(isalpha(x))
               s.push_back(x);
       }
       reverse(s.begin(),s.end());
       int j=0;
        for(int i=0;i<S.size();i++){
            if(isalpha(S[i]))
                S[i]=s[j++];
        }
        
        
        return S;
    }
};
