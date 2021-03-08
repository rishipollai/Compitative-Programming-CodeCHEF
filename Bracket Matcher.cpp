#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string BracketMatcher(string str) {
  
  // code goes here  
  stack<char> st;
  
  for(int i=0;i<str.size();i++)
  {
     if(str[i]=='(')
        st.push(str[i]);
      
     else if(str[i]==')'){
         if(st.empty())
          {
            return "0";
            break;
          }
          if(str[i]==')' and st.top()=='(')
             st.pop();
     }
  }
  if(st.size()==0)
     return "1";
  else 
     return "0";

}

int main(void) { 
   
  // keep this function call here
  cout << BracketMatcher(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
