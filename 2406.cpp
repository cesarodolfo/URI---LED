#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int validapar(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int T;
    string A;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A;

        const char *x = A.data();
        int tam = A.size();

        stack<char> cadeia;

        for (int i = 0; i < tam; i++)
        {
            if (strchr("({[", x[i]))
            {
                cadeia.push(x[i]);
            }

            if (cadeia.size() == 0)
            {
                cadeia.push(x[i]);
                break;
            }

            if (validapar(cadeia.top(), x[i]))
            {
                cadeia.pop();
            }
        }

        char valido;

        if (cadeia.size() != 0)
        {
            valido = 'N';
        }
        else
        {
            valido = 'S';
        }

        cout << valido << endl;
    }

    return 0;
}
