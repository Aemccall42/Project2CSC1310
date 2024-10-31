#ifndef LISTNODE_H
#define LISTNODE_H
#include <iostream>
#include "LinkedList.h"
using namespace std;


template <typename T>
class ListNode
{
    private:
        struct ListNode
        {
            T value;
            struct ListNode *next;
        };
        //list node head ptr in LL

    public:
        //get data functions


        //iterate forward

        //set data, next...

};

template <typename T>
bool LinkedList<T>::isEmpty()
{
    if(!head)
        return true;
    else
        return false;
}










#endif