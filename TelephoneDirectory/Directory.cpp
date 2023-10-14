#include <iostream>
#include <map>
#include <string>

using namespace std;

bool is_find_elem(string str, char n = ' ')
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == n) return true;
    }
    return false;
}

void share_string(string n, string& a, string& b, char sharer = ' ')
{
    int i = 0;

    while (n[i] != sharer)  a += n[i]; i++;

    i++;

    while (i < n.length()) b += n[i]; i++;
}

int main()
{
    map <string, string> directory = {{"68-86-96",     "Ilya"},
                                      {"39-11-16", "Gennadiy"},
                                      {"55-53-55",     "Petr"}};

    while (true)
    {
        string request;
        cout << "Input request: ";
        getline(cin, request);

        if (is_find_elem(request))
        {
            string name, telephone;

            share_string(request, name, telephone);

            directory.insert({telephone, name});
        } else
        {
            if (is_find_elem(request, '-'))
            {
                cout << directory.at(request) << endl;
            } else
            {
                map<string, string>::iterator it = directory.find(request);
                cout << it->second << endl;
            }
        }
    }
}