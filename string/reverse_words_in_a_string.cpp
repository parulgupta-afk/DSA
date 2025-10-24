class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        string word = "";
        string result = "";

        for(int i = 0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else if(!word.empty()){
                reverse(word.begin(),word.end());
                if(!result.empty()) result+=" ";
                result+=word;
                word = "";
            }
        }
        if(!word.empty()){
            reverse(word.begin(),word.end());
            if(!result.empty()) result+=" ";
            result+=word;
        }
        return result;;
    }
};
