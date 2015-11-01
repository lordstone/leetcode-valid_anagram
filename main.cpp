class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) return false;
        if(s.length() == 0) return true;
        int count = 0;
        map<int, int> mymap;
        for(int i = 0; i < s.length(); i++){
            if(mymap.find(s[i]) != mymap.end()){
                mymap[s[i]]++;
            }else{
                mymap[s[i]] = 1;
            }//end if
            count ++;
        }//end for i
        for(int i = 0; i < s.length(); i++){
            if(mymap.find(t[i]) != mymap.end()){
                if(mymap[t[i]] == 0) return false;
                mymap[t[i]]--;
            }else{
                return false;
            }//end if
            count --;
        }//end for i
        return count == 0? true:false;
    }
};
