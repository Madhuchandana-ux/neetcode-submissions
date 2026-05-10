class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>a;
      if(s.length()!=t.length()){
        return false;
      }
      else{
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            a[t[i]]--;
        }
        for(auto & p:a){
            if(p.second!=0){
                return false;
            }
          
        }
         
      }
      return true;
    }
};