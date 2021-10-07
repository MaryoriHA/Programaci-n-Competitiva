#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string entrada;
    set<string> diccionario;
    
    while (cin >> entrada)
    {
        string palabra = "";
        for (int i = 0; i < entrada.size(); ++i)
        {
            char c = tolower(entrada[i]);
            if (isalpha(c))
                palabra += c;
            else if (palabra != "")
            {
                diccionario.insert(palabra);
                palabra = "";
            }
        }
        if (palabra != "")
            diccionario.insert(palabra);
    }
    
    for (set<string>::iterator iter = diccionario.begin(); iter != diccionario.end(); ++iter)
        cout << *iter << '\n';
}