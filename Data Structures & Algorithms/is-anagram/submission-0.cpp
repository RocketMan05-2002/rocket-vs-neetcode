class Solution {
public:
    bool isAnagram(string s, string t) {
        // one solution that comes into my mind is character frequency array
        // since we only have 26 alphabets we can easily make a static one.

        if(s.size()!= t.size()) return false;

        vector<int> freq_s(26,0);
        vector<int> freq_t(26,0);

        for(int i=0;i<s.length();i++){
            freq_s[s[i]-97]++;
            freq_t[t[i]-97]++;
        }

        if(freq_s==freq_t) return true;
        else return false;
    }
};
