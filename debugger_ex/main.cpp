#include "linked_list.hpp"
#include <memory>

int main()
{
    LinkedList ll(23);

    ll.insertEnd(55);
    ll.insertEnd(70);
    ll.insertEnd(12);
    ll.insertEnd(19);

    ll.print();

    return 0;
}