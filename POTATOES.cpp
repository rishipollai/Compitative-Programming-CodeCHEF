#include <iostream>
using namespace std;

bool isprime(int n){
    int c=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
          c++;
    }
    if(c==0)
       return true;
    else 
       return false;
}

int main() {
	int t;cin>>t;
	while(t--){
	    int m,n;cin>>m>>n;
	    int sum=m+n;int k=0;
	    for(int i=1;i<=100;i++){
	        if(isprime(sum+i)){
	            k=i;
	            break;
	        }
	    }
	    cout<<k<<endl;
	}
}

=========================================================================================
  
  /* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static boolean isbool(int n){
        int c=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
               c++;
        }
        if(c==0)
          return true;
        else
          return false;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t;t=sc.nextInt();
		for(int j=0;j<t;j++){
		    int n,m;n=sc.nextInt();m=sc.nextInt();
		    int sum=n+m;int k=0;
		    for(int i=1;i<=100;i++)
		    {
		        if(isbool(sum+i))
		        {
		            k=i;
		            break;
		        }
		    }
		    System.out.println(k);
		}
	}
}

