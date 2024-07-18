//
//  stack_queue.cpp
//  Toy examples
//
//  Stack and Queue via Linked list

#include "stack_queue.hpp"
#include <iostream>

template <class T>
struct Node {
    T data;
    Node* next;
    Node(){
        next = NULL;
    };
    Node(T& data){
        this->data = data;
        this->next = NULL;
    };
};


template <class T>
struct Queue {
    Node<T>* top;
    Node<T>* bottom;
    Queue(){
        top = NULL;
        bottom = NULL;
    };
    
    void insertNode(T& data) {
        Node<T>* node = new Node(data);
        if (bottom != NULL) {
            bottom->next = node;
        } else {
            // empty queue, so init top as well.
            // could check if top is NULL, it should be
            top = node;
        }
        bottom = node;
    };
    
    void deleteNode() {
        if (top != NULL) {
            if (top == bottom) {
                bottom = top->next;
            }
            // delete from the top
            std::cout << "Deleting " << top->data << "\n";
            top = top->next;
        }
    };
    
    void print() {
        std::cout << "Queue: ";
        if (top == NULL){
            std::cout << "Empty\n";
            return;
        }
        Node<T>* node = top;
        while (node->next != NULL) {
            std::cout << node->data << "->";
            node = node->next;
        }
        std::cout << node->data
                  << "\n" ;
    }
};


template <class T>
struct Stack {
    Node<T>* top;
    Stack(){
        top = NULL;
    };
    
    void insertNode(T& data) {
        Node<T>* node = new Node(data);
        node->next = this->top;
        top = node;
    };
    
    T& deleteNode() {
        T& data = top->data;
        top = top->next;
        std::cout << "Deleting " << data << "\n";
        return data;
    };
    
    void print() {
        std::cout << "Stack: ";
        if (top == NULL){
            std::cout << "Empty\n";
            return;
        }
        Node<T>* node = top;
        while (node->next != NULL) {
            std::cout << node->data << "->";
            node = node->next;
        }
        std::cout << node->data
                  << "\n" ;
    }
};
