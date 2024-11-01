/*
Title: Project 2 LinkedList.h
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "SmartPointer.h"       //Include smartpointer

using namespace std;

//template class representing a single node in the linked list
template<typename T>
class Node {
public:
    T data;          // Data stored in this node
    Node* next;     // Pointer to the next node

    //constructor to initialize node data and set the next pointer to nullptr
    Node(T value) : data(value), next(nullptr) {}
};

//template class representing a linked list
template<typename T>
class LinkedList {
private:
    Node<T>* head;  // Pointer to the head of the list
    int size;       // Size of the list

public:
    LinkedList();                               //constructor to initialize an empty linked list
    
    ~LinkedList();                              //destructor to clean up

    void append(T value);                       //append a new value to the end of the list
   
    void prepend(T value);                      //prepend a new value to the begining of the list

    void remove(T value);                       //remove first node from list

    void pop();                                 //remove last node from list

    void display() const;                       //display all value in the list

    int getSize() const;                        //to get current size of the list

    bool isEmpty() const;                       //to check if the list is empty
};

#endif // LINKEDLIST_H