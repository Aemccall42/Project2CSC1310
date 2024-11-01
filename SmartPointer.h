/*
Title: Project 2 SmartPoint.h
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include <iostream>

template<typename T>
class SmartPointer {
private:
    T* ptr; // Pointer to the data

public:
    // Constructor
    SmartPointer(T* p = nullptr) : ptr(p) {}

    // Destructor
    ~SmartPointer() {
        delete ptr; // Clean up memory
    }

    // Copy constructor
    SmartPointer(const SmartPointer& sp) {
        ptr = new T(*sp.ptr); // Deep copy
    }

    // Assignment operator
    SmartPointer& operator=(const SmartPointer& sp) {
        if (this != &sp) {
            delete ptr; // Clean up existing resource
            ptr = new T(*sp.ptr); // Deep copy
        }
        return *this;
    }

    // Dereference operator
    T& operator*() {
        return *ptr;
    }

    // Arrow operator
    T* operator->() {
        return ptr;
    }

    // Comparison operator (nullptr check)
    bool operator==(const SmartPointer& other) const {
        return ptr == other.ptr;
    }

    // Check if the pointer is null
    bool isNull() const {
        return ptr == nullptr;
    }

    // Get raw pointer
    T* get() const {
        return ptr;
    }
};

#endif // SMARTPOINTER_H