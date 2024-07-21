//
//  linked_list.hpp
//  linked_list_exercises
//
//  Created by Marc de Murat on 7/19/24.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <iostream>
#include <stdio.h>
#include <string>


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
    
    void print() {
        if (this != NULL){
            std::cout << this->data;
            if (this->next != NULL) {
                std::cout << "-" << this->next->data << "\n";
            } else {
                std::cout << "-" << "NULL" << "\n";
            }
        } else {
            std::cout << "NULL\n";
        }
    }
        
};

template <class T>
struct LinkedList {
    Node<T>* head;
    LinkedList(){
        this->head = NULL;
    }
    
    LinkedList(Node<T>* node){
        this->head = node;
    }
    
    void insertNode(T& data) {
        Node<T>* node = new Node(data);
        if (head == NULL){
            head = node;
        } else {
            Node<T>* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = node;
        }
    }
    
    void reverse() {
        if (head == NULL){
            return;
        } else {
            Node<T>* prev = NULL;
            while (head->next != NULL){
                Node<T>* temp = head->next;
                head->next = prev;
                prev = head;
                head = temp;
            }
            head->next = prev;
        }
    }

    void print() {
        if (head == NULL){
            std::cout << "Empty\n";
            return;
        }
        Node<T>* node = head;
        while (node->next != NULL) {
            std::cout << node->data << "->";
            node = node->next;
        }
        std::cout << node->data
                  << "\n" ;
    }
    
    void print(std::string str){
        std::cout << str << ": ";
        print();
    }
    
};

LinkedList<int>* PartitionLinkedList(LinkedList<int>* linked_list, int pivot);

#endif /* linked_list_hpp */
