#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N, T;

    cin >> N;
    cin >> T;

    if (N >= 2 && N <= 10000 && T >= 2 && T <= 1000 && T > N)
    {
        return 0;
    }
    
    return 0;
}