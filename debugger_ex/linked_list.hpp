#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

struct Node 
{
    int data;
    Node *next;

    explicit Node(int data): data(data), next(nullptr)
    {
    }

    ~Node();
};

class LinkedList
{
    private:
        Node *head;

    public:
        explicit LinkedList(int data) : head(new Node(data))
        {
        }

        ~LinkedList();

        // Insert element at end of linked list
        void insertEnd(int data);

        // Print out elements of linked list
        void print() const;
};

#endif 