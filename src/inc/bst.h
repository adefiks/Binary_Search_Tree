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
    void printNode(node *ptr);
    node *findMin(node *data);
    node *findMax(node *data);

public:
    bst(const int argc, char *args[]);
    ~bst();
    void addToBinaryTree(int data);
    void removeFromBinaryTree(int data);
    node *findNode(int data);
    node *findMin();
    node *findMax();
    void printBinaryTree();
};
