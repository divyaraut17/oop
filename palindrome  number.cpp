class Solution {
public:
    bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    int original = x;
    int reversed = 0;

    // Reverse the integer
    while (x > 0) {
        int digit = x % 10;
        if (reversed > (INT_MAX - digit) / 10) {
            // Handle potential integer overflow
            return false;
        }
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Check if the original integer equals the reversed one
    return original == reversed;
}

};
