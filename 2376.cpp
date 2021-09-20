#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 0;
    int M, N, b=0;

    char v[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};

    while (i <= 15)
    {
        cin >> M >> N;

        if (M > N)
        {
            while (v[j] == 'Z')
            {
                j = j + 1;
                b=0;
            }
            while (v[j+1] == 'Z')
            {
                j = j + 1;
                b = 1;
            }
            v[j + 1] = 'Z';
            if(b == 0){
                j+=2;
            }
            else if(b == 1){
                j++;
            }
        }
        else
        {
            while (v[j] == 'Z')
            {
                j = j + 1;
                b = 1;
            }
            v[j] = 'Z';
            while (v[j + 1] == 'Z')
            {
                j = j + 1;
                b=0;
            }
            if(b == 0){
                j+=2;
            }
            else if(b == 1){
                j++;
            }
            while (v[j] == 'Z')
            {
                j = j + 1;
                b = 1;
            }
        }
        b = 0;
        i++;
        if (j >= 15 || i >=15)
        {
            j = 0;
        }
    }
    for (i = 0; i < 16; i++)
    {
        if (v[i] != 'Z')
        {
            v[0] = v[i];
        }
    }

    cout << v[0];

    return 0;
}
