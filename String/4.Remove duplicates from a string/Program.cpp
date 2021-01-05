/*
Remove duplicates from a given string.
Given a string S, the task is to remove all the duplicates in the given string.
INUPT  - geeksforgeeks
OUTPUT - geksfor
*/

#include <iostream>
#include <map>
using namespace std;

string RemoveDuplicates(string str){
    map<char,int> myMap;
    string result;
    for(int i=0;i<str.length();i++){
       if(myMap.find(str[i])==myMap.end()){
           myMap.insert({str[i],1});
           result=result+str[i];
       }   
    }
    return result;
}
int main()
{
    string str;
    cout << "Enter the string:";
    cin >> str;
    cout<<"Result:"<<RemoveDuplicates(str);

}
