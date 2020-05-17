#include "inc/bst.h"

bst::bst(const int argc, char *args[])
{
    if (argc > 1)
    {
        // add root
        nodes.emplace_back();
        nodes[0].data = bst::getData(args[1]);

        for (int i = 2; i < argc; i++)
        {
            int data = bst::getData(args[i]);
            bst::addToBinaryTree(data);
        }

        // for (auto &&i : nodes)
        //     cout << "node: " << i.data << endl;
    }
}

bst::~bst()
{
}

int bst::getData(char *arg)
{
    int ret = 0;
    for (size_t j = 0; j < strlen(arg) - 1; j++)
    {
        ret += (static_cast<int>(arg[j]) - 48) * pow(10, (((strlen(arg) - 1) - j)));
    }
    ret += static_cast<int>(arg[strlen(arg) - 1]) - 48;
    return ret;
}

void bst::addToBinaryTree(int data)
{
    if (nodes.empty())
    {
        // add root
        nodes.emplace_back();
        nodes[0].data = data;
        return;
    }

    nodes.emplace_back();
    nodes.back().data = data;

    // root -> nodes[0]
    auto ptr = &nodes[0];

    while (true)
    {
        if (nodes.back().data <= ptr->data)
        {
            if (ptr->left == nullptr)
            {
                ptr->left = &nodes.back();
                break;
            }
            else
                ptr = ptr->left;
        }
        else
        {
            if (ptr->right == nullptr)
            {
                ptr->right = &nodes.back();
                break;
            }
            else
                ptr = ptr->right;
        }
    }
}

void bst::printBinaryTree()
{
    if (nodes.empty())
    {
        cout << "Binary Tree Empty" << endl;
    }
    else
    {
        // root -> nodes[0]
        auto ptr = &nodes[0];
        bst::printNode(ptr);
    }
}

void bst::printNode(node *ptr)
{
    if (ptr->left != nullptr)
        bst::printNode(ptr->left);

    if (ptr->right != nullptr)
        bst::printNode(ptr->right);

    cout << "node: " << ptr->data << endl;
}
