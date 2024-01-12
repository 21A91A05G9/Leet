class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.size()/2, j=s.size()-1,c=0,d=0;
        
        for(int i=0;i<l;i++){
            if(s[i]=='a' or s[i]=='i' or s[i]=='u' or  s[i]=='e'  or s[i]=='o' or
               s[i]=='U' or s[i]=='O' or s[i]=='I' or   s[i]=='E' or s[i]=='A' )
            c++;
            if(s[j]=='a' or s[j]=='e' or s[j]=='o' or  s[j]=='u' or s[j]=='i'  or
               s[j]=='O' or s[j]=='I' or s[j]=='U' or   s[j]=='E' or s[j]=='A' )
            d++;
            j--;
        }
        if(c==d)  return true;
        else return false;
    }
};
