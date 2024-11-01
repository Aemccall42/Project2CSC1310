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
    LinkedList();
    
    ~LinkedList(); 

    void append(T value);
   
    void prepend(T value);

    void remove(T value);

    void pop();

    void display() const; 

    int getSize() const; 

    bool isEmpty() const;
};

#endif // LINKEDLIST_H