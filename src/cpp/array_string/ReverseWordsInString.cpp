class Solution {
    public:
        string reverseWords(string s) {
            // reverse the whole string
            reverse(s.begin(), s.end());
    
            int n = s.size();
            int idx = 0;
            for (int start = 0; start < n; ++start) {
                if (s[start] != ' ') {
                    // if not 1st word, add single blank
                    if (idx != 0) s[idx++] = ' ';
    
                    // iterate the word
                    int end = start;
                    while (end < n && s[end] != ' ') s[idx++] = s[end++];
    
                    // reverse the word
                    reverse(s.begin() + idx - (end - start), s.begin() + idx);
    
                    // move to the next blank
                    start = end;
                }
            }
            s.erase(s.begin() + idx, s.end());
            return s;
        }
    };