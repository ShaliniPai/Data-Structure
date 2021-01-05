/*
Given a string, find its first non-repeating character
Given a string, find the first non-repeating character in it. For example, if the input string is “GeeksforGeeks”,
then the output should be ‘f’ and if the input string is “GeeksQuiz”, then the output should be ‘G’.

Example:

Input: "geeksforgeeks"
Explanation:
Step 1: Construct a character count array 
        from the input string.
   ....
  count['e'] = 4
  count['f'] = 1
  count['g'] = 2
  count['k'] = 2
  ……

Step 2: Get the first character who's 
        count is 1 ('f').
*/

#include <iostream>
#include <map>
using namespace std;

char firstNonRepeatingCharacter(string str)
{
    map<char, int> myMap;
    char result;
    for (auto c : str)
    {
        myMap[c]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        // cout<<str[i]<<":"<<myMap[str[i]]<<endl;
        if (myMap[str[i]] == 1)
        {
            result = str[i];
            break;
        }
    }
    cout << result;
    return result;
}

int main()
{
    string str;
    cout << "Enter the input string:";
    cin >> str;
    firstNonRepeatingCharacter(str);
}