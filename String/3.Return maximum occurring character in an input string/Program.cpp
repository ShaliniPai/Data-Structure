/*
Return maximum occurring character in an input string.
Write an efficient function to return maximum occurring character in the input string e.g., 
if input string is “test” then function should return ‘t’.

Algorithm:
One obvious approach to solve this problem would be to sort the input string and then traverse through the 
sorted string to find the character which is occurring maximum number of times. Let us see if we can improve on this. 
So we will use a technique called ‘Hashing’. In this, when we traverse through the string, we would hash each 
character into an array of ASCII characters.

Input string = “test”
1: Construct character count array from the input string.
  count['e'] = 1
  count['s'] = 1
  count['t'] = 2

2: Return the index of maximum value in count array (returns ‘t’).
Typically, ASCII characters are 256, so we use our Hash array size as 256. But if we know that our input string 
will have characters with value from 0 to 127 only, we can limit Hash array size as 128. Similarly, based on extra 
info known about input string, the Hash array size can be limited to 26.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

// function to find the maximum occurring character in
// an input string which is lexicographically first
char getMaxOccurringChar(string str)
{
    char result;
    map<char, int> myMap;

    for (int i = 0; i < str.length(); i++)
    {
        if (myMap.find(str[i]) == myMap.end())
        {
            //If the character does not exist in the map
            myMap.insert({str[i], 1});
        }
        else
        {
            myMap[str[i]]++;
        }
    }
    // Reference variable to help find
    // the entry with the highest value
    pair<int, int> entryWithMaxValue = make_pair('a', 0);
    map<char, int>::iterator currentEntry;
    for (currentEntry = myMap.begin();
         currentEntry != myMap.end();
         ++currentEntry)
    {
        if (currentEntry->second > entryWithMaxValue.second)
        {

            entryWithMaxValue = make_pair(
                currentEntry->first,
                currentEntry->second);
            result = currentEntry->first;
        }
    }
    return result;
}

// Driver Code
int main()
{
    string str;
    cout << "Please enter the string:";
    cin >> str;
    cout << "Maximum occurring character = "
         << getMaxOccurringChar(str);
    return 0;
}