/*
Write a program to reverse an array or string.
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include <iostream>
using namespace std;

string reverseWord(string str);
int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    cout << "Reveresed string is :" << reverseWord(str);
}

string reverseWord(string str)
{
    string temp;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        temp = temp + str[i];
    }
    return temp;
}