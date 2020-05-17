#include <iostream>
#include <string.h>
#include <vector>
#include <tuple>
#include <math.h>
using namespace std;

struct node
{
    int data = 0;
    node *left = nullptr;
    node *right = nullptr;
};

class bst
{
private:
    vector<node> nodes;
    int getData(char *arg);
    tuple<int, int> test(int, int);

public:
    bst(const int argc, char *args[]);
    ~bst();
    void reorder_binary_tree();
};
