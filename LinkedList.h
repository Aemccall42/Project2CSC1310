#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "SmartPointer.h"       //Include smartpointer

using namespace std;

template<typename T>
class Node {
public:
    T data;          // Data stored in this node
    Node* next;     // Pointer to the next node

    Node(T value) : data(value), next(nullptr) {}
};

template<typename T>
class LinkedList {
private:
    Node<T>* head;  // Pointer to the head of the list
    int size;       // Size of the list

public:
    LinkedList();/* : head(nullptr), size(0) {}*/
    
    ~LinkedList(); /*{
        while (head) {
            pop(); // Implemented below
        }
    }*/

    void append(T value); /*{
        ListNode<T>* newNode = new ListNode<T>(value);
        if (!head) {
            head = newNode;
        } else {
            ListNode<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }*/
   
    void prepend(T value);
    void remove(T value);

    void pop();/* {
        if (!head) return; // Nothing to pop
        ListNode<T>* temp = head;
        head = head->next; // Move head to next node
        delete temp; // Clean up memory
        size--;
    }*/

    void display() const; /*{
        ListNode<T>* temp = head;
        while (temp) {
            cout << *(temp->data) << endl; // Dereference SmartPointer to display DataItem
            temp = temp->next;
        }
    }*/

    int getSize() const; /*{
        return size;
    }*/
    bool isEmpty() const;

   
};

#endif // LINKEDLIST_H