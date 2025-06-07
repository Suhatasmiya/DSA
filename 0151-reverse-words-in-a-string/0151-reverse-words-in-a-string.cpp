class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word, result;
        stringstream ss(s);  // Use stringstream to split words
        
        while (ss >> word) {  // Read words ignoring extra spaces
            words.push_back(word);
        }

        // Reverse the order of words
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i != 0) result += " ";  // Add space between words
        }
        
        return result;
        
    }
};