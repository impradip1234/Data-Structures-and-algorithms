#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string AllcharsString(vector<string>& word) {
        string str = "";
        for (int i = 0; i < word.size(); i++) {
            str = str + word[i];
        }
        return str;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word1String = AllcharsString(word1);
        string word2String = AllcharsString(word2);
        if (word1String.size() != word2String.size())
            return false;
        for (int i = 0; i < word2String.size(); i++) {
            if (word1String[i] != word2String[i])
                return false;
        }
        return true;
    }
};

int main() {
    vector<string> word1 = {"abc", "d", "defg"};
    vector<string> word2 = {"abcddefg"};

    Solution sol;
    bool ans = sol.arrayStringsAreEqual(word1, word2);

    cout << (ans ? "true" : "false") << endl;
    return 0;
}