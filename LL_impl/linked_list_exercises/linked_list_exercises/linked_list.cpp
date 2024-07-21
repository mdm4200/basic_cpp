//
//  stack_queue.cpp
//  Toy examples
//
//  Stack and Queue via Linked list

#include <iostream>
#include "linked_list.hpp"

// implement a method which sorts the list around a pivot
LinkedList<int>* PartitionLinkedList(LinkedList<int>* linked_list, int pivot){
    Node<int>* head = linked_list->head;
    Node<int>* tail = linked_list->head;
    
    Node<int>* node = linked_list->head;
    while (node != NULL) {
        Node<int>* next = node->next;
        if (node->data < pivot) {
            node->next = head;
            head = node;
        } else {
            tail->next = node;
            tail = node;
        }
        node = next;
    }
    tail->next = NULL;
    LinkedList<int>* res = new LinkedList<int>();
    res->head = head;
    return res;
}


