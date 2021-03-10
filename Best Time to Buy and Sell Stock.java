class Solution {
    public int maxProfit(int[] prices) {
        
       int pri=10001;
       int prft=0;
       for(int i=0;i<prices.length;i++){
           if(pri>=prices[i])
                 pri=prices[i];
           
           prft=Math.max(prft,prices[i]-pri);
       }
      return prft;
    }
}



=================================================================================
  
  class Solution {
    public int maxProfit(int[] prices) {
        int a=prices[0],b=0;
        int n=prices.length;
        int c=0,d=0;
        for(int i=1;i<n;i++)
        {
            if(a>prices[i])
            {
                a=Math.min(a,prices[i]);
                c=i;
            }
        }
        b=prices[c];
        for(int i=c;i<n;i++)
        {
            if(b<prices[i]){
                //System.out.println(b+" "+prices[i]);
                b=Math.max(b,prices[i]);
                //System.out.println(c+" "+d);
                d=i;
            }
        }
        //System.out.println(c+" "+d);
        if(c!=0 && d!=0)
            return b-a;
        else
            return 0;
        
        
        
    }
}
