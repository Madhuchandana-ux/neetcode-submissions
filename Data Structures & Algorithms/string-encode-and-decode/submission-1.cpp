class Solution {
public:
    // Encode: turn vector<string> into one string
    string encode(vector<string>& strs) {
        string encoded;
        for (string &s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    // Decode: turn encoded string back into vector<string>
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            // Step 1: find the position of '#'
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            // Step 2: extract length
            int length = stoi(s.substr(i, j - i));
            // Step 3: extract word of given length
            string word = s.substr(j + 1, length);
            res.push_back(word);
            // Step 4: move i forward
            i = j + 1 + length;
        }
        return res;
    }
};
