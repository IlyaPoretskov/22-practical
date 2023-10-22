#include <iostream>
#include <map>
#include <string>

using namespace std;

bool is_anagrams(string first, string second)
{
    if (first.length() != second.length())     return false;

    map <int, char>  firstMap;
    map <int, char> secondMap;

    for (int i = 0; i < first.length(); i++) {

        firstMap.insert({first[i], first[i]});
        secondMap.insert({second[i], second[i]});
    }
    return firstMap == secondMap;
}

int main()
{
    string a, b;

    cout << "Input first string:\n";
    cin >> a;
    cout << "Input second string:\n";
    cin >> b;

    cout << boolalpha << is_anagrams(a, b) << endl;

    system("pause");
    return 0;
}