#include <iostream>
#include "ListNode.h"

using namespace std;

template <typename T>
class LinkedList
{

    private:
    ListNode *head;
    ListNode *tail;

    public:
        LinkedList()
        {
            head = NULL;

        }
        ~LinkedList();


        bool isEmpty();
        int getLength();
        void appendNode(T);
        void displayList() const;
        T getNodeValue(int);
        


};


template <typename T>
bool LinkedList<T>::isEmpty()
{
    if(!head)
        return true;
    else
        return false;
}