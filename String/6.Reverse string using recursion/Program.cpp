//Print reverse of a string using recursion

#include <bits/stdc++.h>
using namespace std;

/* Function to print reverse of the passed string */
void reverse(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}

int main()
{
    string a;
    cout << "Enter a string:";
    cin >> a;
    cout << "Result:";
    reverse(a);
    return 0;
}