class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v(arr.size()+1,0);
        map<int,int>mp;
        for(auto e:arr){
            mp[e]++;
        }
        cout<<mp.size()<<" "<<arr.size()<<" ";
        for(auto e:mp){
            if(v[e.second]==1){
                return false;
            }
            else{
                v[e.second]=1;
            }
        }
        return true;
    }
};
