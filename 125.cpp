class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> phrase;
        
        for(int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                phrase.push_back(tolower(s[i]));
            }
        }
        
        for(int i = 0; i < phrase.size(); i++){
            if (phrase[i] != phrase[phrase.size() - 1 - i]){
                return false;
            }
        }
        
        return true;
    }
};
