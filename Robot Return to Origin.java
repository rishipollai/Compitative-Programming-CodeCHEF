class Solution {
    public boolean judgeCircle(String moves) {
        
        int x=0,y=0;
        for(int i=0;i<moves.length();i++){
            char c=moves.charAt(i);
            if(c=='U')
                x++;
            if(c=='D')
                x--;
            if(c=='R')
                y++;
            if(c=='L')
                y--;
        }
        if(x==0 && y==0)
            return true;
        else
            return false;
        
    }
}
