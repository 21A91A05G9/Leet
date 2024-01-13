class Solution {
public:
    int minSteps(string s, string t) {
        vector<
        for(auto e:s){
            a[e]++;
        }
        for(auto e:t){
            b[e]++;
        }
        int c=0;
        for(int i=0;i<26;i++){
            char ch=i+97;
            c+=abs(a[ch]-b[ch]);
            
        }
        return c/2;
    }
};
