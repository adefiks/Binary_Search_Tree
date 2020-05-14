#include <iostream>
#include <string.h>
#include <math.h>
#include "inc/main.h"
using namespace std;

int main(const int argc, char *args[])
{
    cout << "Start ";
    for (size_t i = 2; i < strlen(args[0]); i++)
        cout << args[0][i];
    cout << " program" << endl;

    node nodes[argc - 1];

    for (int i = 1; i < argc; i++)
    {
        nodes[i].data = 0;
        for (size_t j = 0; j < strlen(args[i]) - 1; j++)
        {
            nodes[i].data += (static_cast<int>(args[i][j]) - 48) * pow(10, (((strlen(args[i]) - 1) - j)));
        }
        nodes[i].data += static_cast<int>(args[i][strlen(args[i]) - 1]) - 48;
        cout << "node[" << i << "]:" << nodes[i].data << endl;
    }

    test();

    return 0;
}