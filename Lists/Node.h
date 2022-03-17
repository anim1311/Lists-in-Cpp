#include <iostream>


template<typename T>
class Node {
public:
    T data;
    Node* next;

    
    Node()
    {
        data = NULL;
        next = NULL;
    }

    
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};







