class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3) return false;

        bool vowel = false;
        bool consonant = false;
        bool digit = true;

        for(char ch : word){

            // vowel check
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vowel = true;
            }

            // consonant check
            else if(isalpha(ch)){
                consonant = true;
            }

            // digit check
            else if(isdigit(ch)){
                digit = true;
            }

            // special character
            else{
                return false;
            }
        }

        return vowel && consonant && digit;
    }
};