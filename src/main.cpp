#include <iostream>

#include "inc/main.h"
#include "inc/bst.h"
using namespace std;

int main(const int argc, char *args[])
{
    printStart(args[0]);

    bst Binary_Search_Tree(argc, args);

    Binary_Search_Tree.printBinaryTree();

    test();

    return 0;
}