class Solution {
    public:
    
        bool isVowel(char c) {
            c = tolower(c);
            // vector<char> charList = {
            //     'a', 'e', 'i', 'o', 'u',
            // };
            // return find(charList.begin(), charList.end(), c) != charList.end();
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        }
    
        string reverseVowels(string s) {
    
            int start = 0;
            int end  = s.size() - 1;
            
            // While we still have characters to traverse
            while (start < end) {
                // Find the leftmost vowel
                while (start < s.size() && !isVowel(s[start])) {
                    start++;
                }
                // Find the rightmost vowel
                while (end >= 0 && !isVowel(s[end])) {
                    end--;
                }
                // Swap them if start is left of end
                if (start < end) {
                    swap(s[start++], s[end--]);
                }
            }
            
            return s;
        }
    };