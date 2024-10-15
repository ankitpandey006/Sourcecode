#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    // Reversing the number
    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num = num / 10;
    }
    
    // Check if the original number is the same as the reversed number
    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}
