#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, string>::iterator find_alph(map<int, string>& n)
{
    map<int, string>::iterator min = n.begin();

    map<int, string>::iterator it = n.begin();

    for (; it != n.end(); it++)
    {
        if (it->second < min->second)
        {
            min = it;
        }
    }
    return min;
}

int main()
{   
    map <int, string> queue;

    int c = 0;

    while (true)
    {
        string request;
        cin >> request;
        if (request == "Next" || request == "next")
        {
            if (queue.empty())
            {
                cout << "Queue is empty!" << endl;
            }
            else
            {  
                cout << find_alph(queue)->second << endl;
                queue.erase(find_alph(queue));
            }
        } else
        {
            queue.insert({c, request});
        }
        c++;
    }
}