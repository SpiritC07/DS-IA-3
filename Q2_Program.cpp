/*
PRN: 138
Scenario: Cold-Drink Flavours
Hash Function: Division Method
Collision Handling: Linear Probing
Table Size: 23 (assumed)
*/

#include <iostream>
using namespace std;

#define M 23
#define N 20

int main()
{
    int a[N] = {38, 51, 64, 77, 90, 3, 16, 29, 42, 55,
                68, 81, 94, 7, 20, 33, 46, 59, 72, 85};

    int hashTable[M];
    for (int i = 0; i < M; i++)
        hashTable[i] = -1;
    
    return 0;
}
