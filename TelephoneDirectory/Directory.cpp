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

    while (n[i] != sharer) 
    {
        a += n[i]; 
        i++;
    }

    i++;

    while (i < n.length()) 
    {
        b += n[i]; 
        i++;
    }
}

int main()
{
    map <string, string> directory;
    map <string, string> directoryBackwards;

    while (true)
    {
        string request;
        cout << "Input request: ";
        getline(cin, request);

        if (is_find_elem(request))
        {
            string name, telephone;

            share_string(request, telephone, name);

            directory.insert({telephone, name});
            directoryBackwards.insert({name, telephone});
        } else
        {
            if (is_find_elem(request, '-'))
            {
                cout << directory.find(request)->second << endl;
            } 
            else
            {
                cout << directoryBackwards.find(request)->second << endl;
            }
        }
    }
}