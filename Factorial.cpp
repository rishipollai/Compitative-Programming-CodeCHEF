#include <iostream>
#include <string>
#define ll long long int
using namespace std;

ll FirstFactorial(int num) {
  
  // code goes here 
   ll k=1; 
   for(int i=1;i<=num;i++)
        k*=i;
   return k;
       

}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
