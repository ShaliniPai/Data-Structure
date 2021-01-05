/*
Remove characters from the first string which are present in the second string.
Write an efficient C function that takes two strings as arguments and removes the characters from first string 
which are present in second string (mask string).

Algorithm: Let first input string be”test string” and the string which has characters to be removed from first string be “mask”
1: Initialize:
res_ind = 0 /* index to keep track of processing of each character in i/p string 
ip_ind = 0 /* index to keep track of processing of each character in the resultant string 

2: Construct count array from mask_str. Count array would be:
(We can use Boolean array here instead of int count array because we don’t need count, we need to know only if character is present in mask string)
count[‘a’] = 1
count[‘k’] = 1
count[‘m’] = 1
count[‘s’] = 1

3: Process each character of the input string and if count of that character is 0 then only add the character to the resultant string.
str = “tet tringng” // ’s’ has been removed because ’s’ was present in mask_str but we we have got two extra characters “ng”
ip_ind = 11
res_ind = 9

4: Put a ‘\0′ at the end of the string
*/

#include <iostream>
using namespace std;
#include <cstring>
#include <iterator>
#include <set>

void removeRepeatedCharacters(string str1, string str2)
{  
    set<char> mySet;
    for (int i = 0; i < str2.length(); i++)
    {
        str2[i] = tolower(str2[i]);
        mySet.insert(str2[i]);
    }
    string result;
    for (int i = 0; i < str1.length(); i++)
    {
        str1[i]=tolower(str1[i]);
        if ((mySet.find(str1[i]) != mySet.end())){
           //"Element is present in the set"
           continue;
        }
        else{
           //"Element not found"
           result=result+str1[i];
        }
    }
    cout<<result;
}

int main()
{
    string str1, str2;
    cout << "Enter input string:";
    cin >> str1;
    cout << "Enter mask string:";
    cin >> str2;
    removeRepeatedCharacters(str1, str2);
}