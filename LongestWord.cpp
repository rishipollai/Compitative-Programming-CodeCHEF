#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string LongestWord(string sen) {
  
  // code goes here  
  int n=sen.size();
  vector<string> v;
  string s="";
  for(int i=0;i<n;i++){
      if(isalpha(sen[i]))
      {
           s+=sen[i];
      }
      if(!isalpha(sen[i]))
      {
         v.push_back(s);
         s="";
      }
      if(i==n-1)
      {
         v.push_back(s);
      }
  }
  int mx=0;
  for(auto x:v)
  {
      int sp=x.size();
      mx=max(mx,sp);   
  }
  for(auto x:v)
  {
     int sp=x.size();
     if(sp==mx)
     {
         return x;
         break;
     }
  }

  //return "one";

}

int main(void) { 
   
  // keep this function call here
  cout << LongestWord(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
