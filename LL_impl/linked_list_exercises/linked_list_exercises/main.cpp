//
//  main.cpp
//  linked_list_exercises
//
//  Created by Marc de Murat on 7/19/24.
//

#include <iostream>
#include <string>
using namespace std;
#include "linked_list.hpp"


int main(int argc, const char * argv[]) {
    int val1 = 3;
    int val2 = 5;
    int val3 = 8;
    int val4 = 10;
    int val5 = 1;
    int val6 = 2;
    LinkedList<int>* linked_list = new LinkedList<int>();
    linked_list->insertNode(val1);
    linked_list->insertNode(val2);
    linked_list->insertNode(val3);
    linked_list->insertNode(val4);
    linked_list->insertNode(val5);
    linked_list->insertNode(val6);
    linked_list->print();
    int pivot = 5;
    linked_list = PartitionLinkedList(linked_list, pivot);
    string str = "Partitioned around " + to_string(pivot);
    linked_list->print(str);
}
