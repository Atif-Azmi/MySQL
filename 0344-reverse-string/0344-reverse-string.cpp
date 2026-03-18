class Solution {
public:
    void reverseString(vector<char>& s) {
        helper(s, 0, s.size() - 1);
    }

    void helper(vector<char>& s, int l, int r) {
        if (l >= r) return;
        swap(s[l], s[r]);
        helper(s, l + 1, r - 1);
    }
};
