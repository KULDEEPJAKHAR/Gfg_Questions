class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        vector<bool> seen(26,false);
        string t = "";
        for(auto i:s){
            if(seen[i-'a']){
            t +=i;
            return t;
            
        }
        else{
            seen[i-'a']=true;
        }}
        return "-1";
    }
    
};