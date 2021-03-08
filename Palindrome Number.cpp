class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0)
             return true;
        if(x<0 or x%10==0)
            return false;
          
        
           long long int k=x;
           long long int c=0,b=0;
            while(x!=0){
                int a=x%10;
                c=b+a;
                b=c*10; 
                x=x/10;
            }
          if(k==c)
              return true;
          else
              return false;
        
    }
};
