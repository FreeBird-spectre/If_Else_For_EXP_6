// Abir Seth
// EnTC A1
// PRN-24070123003

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int count = 1;

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }

    return 0;
}

1
23
456
78910


=== Code Execution Successful ===
