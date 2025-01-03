#include <iostream>
using namespace std;

int isPalindrome(int n) {
    //converting the integer to a string to compact overflow  incase of large values
  string s = to_string(n);
  //l is the length of the string
    int l = s.length();
    
    //looping through the string to check if it's a palindrome

    for (int i = 0; i < l / 2; i++) {

        // Comparing i th character from starting
        //  and len-i th character from end
        if (s[i] != s[l - i - 1])
            return false;
    }
  
    // If the above loop doesn't return anything
    //then it's Palindrome. 
    return true;
}

int main() { 
    int n
        = 11211;
    if (isPalindrome(n) == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}