#include "LinkedList.h"

// Constructor initializes an empty list
template<typename T>
LinkedList<T>::LinkedList() {
    this->head = nullptr;
    this->size = 0;
}

// Destructor to clean up the nodes
template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    Node<T>* nextNode;
    while (current != nullptr) {
        nextNode = current->next; // Save the next node
        delete current;           // Delete the current node
        current = nextNode;       // Move to the next node
    }
}

// Append a value to the end of the list
template<typename T>
void LinkedList<T>::append(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (head == nullptr) {
        head = newNode; // If the list is empty, set new node as head
    } else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next; // Traverse to the last node
        }
        current->next = newNode; // Link the new node
    }
    size++; // Increment size
}

// Prepend a value to the beginning of the list
template<typename T>
void LinkedList<T>::prepend(T value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head; // Link new node to the current head
    head = newNode;       // Update head to new node
    size++;               // Increment size
}

// Remove the first occurrence of a value
template<typename T>
void LinkedList<T>::remove(T value) {
    if (head == nullptr) return; // Empty list

    if (head->data == value) { // If the head node needs to be removed
        Node<T>* temp = head;
        head = head->next; // Move head to the next node
        delete temp;       // Delete the old head node
        size--;            // Decrease size
        return;
    }

    Node<T>* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            Node<T>* temp = current->next; // Node to be deleted
            current->next = current->next->next; // Bypass the node
            delete temp; // Delete the node
            size--; // Decrease size
            return;
        }
        current = current->next; // Move to the next node
    }
}

// Display the contents of the list
template<typename T>
void LinkedList<T>::display() const {
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->data << " -> "; // Print data
        current = current->next; // Move to next node
    }
    cout << "nullptr" << endl; // End of list
}

// Check if the list is empty
template<typename T>
bool LinkedList<T>::isEmpty() const {
    return head == nullptr;
}

// Get the size of the list
template<typename T>
int LinkedList<T>::getSize() const {
    return size;
}