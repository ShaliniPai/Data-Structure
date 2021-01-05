/*
Write an efficient program to print all the duplicates and their counts in the input string.
Algorithm: Let input string be “geeksforgeeks” 
1: Construct character count array from the input string.
count[‘e’] = 4 
count[‘g’] = 2 
count[‘k’] = 2 
*/

#include <iostream>
#include <map>
using namespace std;

void ComputeDuplicate(string str)
{
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
            cout << myMap[str[i]]++;
        }
    }
    map<char, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        if (it->second > 1)
        {
            cout << "Count:{" << it->first << ":" << it->second << "}" << endl;
        }
    }
}

int main()
{
    string str;
    cout << "Enter the string:";
    cin >> str;
    ComputeDuplicate(str);
}