#include "linked_list.hpp"
#include <iostream>

Node::~Node()
{
    delete next;
}

LinkedList::~LinkedList()
{
    delete head;
}

void LinkedList::insertEnd(int data)
{
    Node *newNode = new Node(data);

    Node *current = head;

    // Go to last element

    // CAUSE OF SEGMENTATION FAULT
    // insertEnd() accidently iterates to nullptr instead of the last existing element
    while (current != nullptr)
    {
        current = current->next;
    }

    // Segmentation fault occurs here due to trying to access 
    // the "next" element from a null pointer
    current->next = newNode;
}

void LinkedList::print() const
{
    // Using a debugger you can view the values of variables at runtime
    // And you can also edit them at runtime as well
    int x = 55;
    int y = 80;


    const Node *current = head;

    while (current != nullptr)
    {
        std::cout << current->data << '\n';

        current = current->next;
    }
}