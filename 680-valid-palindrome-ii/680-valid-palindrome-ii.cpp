class Solution {
public:
    bool palin(string s,int l,int h){
       // int l=0,h=s.length();
        while(l<h){
            if(s[l]!=s[h])return false;
            l++;h--;
        }return true;
    }
    bool validPalindrome(string s) {
        int l=0,h=s.length()-1;
        if(palin(s,l,h))return true;
        else{bool flag=false;
            while(l<h){
               if(s[l]==s[h])
               {
                   l++,h--;
               }
                else
                {
                    if(palin(s,l+1,h))
                    {
                        return true;
                    }
                   else if(palin(s,l,h-1))
                        return true;
                    else
                        return false;
                }
            }
        }return false;
        
    }
};