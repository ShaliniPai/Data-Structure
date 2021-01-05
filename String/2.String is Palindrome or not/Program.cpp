/*
Program to Check if a Given String is Palindrome.
A string is said to be palindrome if reverse of the string is same as string. 
For example, “abba” is palindrome, but “abbc” is not palindrome.
*/

#include <iostream>
using namespace std;

void PalindromeVerification(string str);
int main()
{
    string str;
    cout << "Enter the string:";
    cin >> str;
    PalindromeVerification(str);
}

void PalindromeVerification(string str)
{
    int start = 0;
    int end = str.length() - 1;
    while (end > start)
    {
        if (str[start++] != str[end--])
        {
            cout << str << " is not a palindrome." << endl;
            return;
        }
    }
    cout << str << " is a palindrome." << endl;
}