//
//  main.cpp
//  Toy examples
//
//  Created by Marc de Murat on 7/18/24.
//

#include <iostream>
#include "stack_queue.cpp"

int main(int argc, const char * argv[]) {
    Stack<int>* stack = new Stack<int>();
    int val1 = 123;
    int val2 = 234;
    stack->insertNode(val1);
    stack->insertNode(val2);
    stack->print();
    stack->deleteNode();
    stack->print();
    stack->deleteNode();
    stack->print();
    
    Queue<int>* queue = new Queue<int>();
    queue->insertNode(val1);
    queue->insertNode(val2);
    queue->print();
    queue->deleteNode();
    queue->print();
    queue->deleteNode();
    queue->print();
}



