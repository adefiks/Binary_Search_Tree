#include "inc/bst.h"

bst::bst(const int argc, char *args[])
{
    for (int i = 1; i < argc; i++)
    {
        nodes.emplace_back();
        nodes[i - 1].data = bst::getData(args[i]);

        cout << "node[" << i << "]:" << nodes[i - 1].data << endl;
    }

    for (size_t i = 1; i < nodes.size(); i++)
    {
        // root -> nodes[0]
        auto ptr = &nodes[0];

        while (true)
        {
            if (nodes[i].data <= ptr->data)
            {
                if (ptr->left == nullptr)
                {
                    ptr->left = &nodes[i];
                    break;
                }
                else
                {
                    ptr = ptr->left;
                }
            }
            else
            {
                if (ptr->right == nullptr)
                {
                    ptr->right = &nodes[i];
                    break;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
        }
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

void bst::reorder_binary_tree()
{
    for (size_t i = 1; i < nodes.size(); i++)
    {

        while (nodes[i].right != nullptr)
        {
            /* code */
        }

        if (nodes[0].data >= nodes[i].data)
        {
            nodes[0].left = &nodes[i];
        }
        else
        {
            nodes[0].right = &nodes[i];
        }
    }

    cout << "node " << nodes[0].left->data << endl;
}
