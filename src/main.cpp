#include <iostream>

#include "inc/main.h"
#include "inc/bst.h"
using namespace std;

int main(const int argc, char *args[])
{
    printStart(args[0]);

    bst Binary_Search_Tree(argc, args);

    Binary_Search_Tree.addToBinaryTree(23);
    Binary_Search_Tree.printBinaryTree();

    auto testNode = Binary_Search_Tree.findNode(22);
    if (testNode)
        cout << "test node: " << testNode->data << endl;

    Binary_Search_Tree.removeFromBinaryTree(22);

    auto min = Binary_Search_Tree.findMin();
    cout << "min: " << min->data << endl;

    
    return 0;
}