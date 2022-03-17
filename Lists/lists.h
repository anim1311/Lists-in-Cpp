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

template<typename T>
class List {
    Node<T>* m_head = new Node<T>();
    int m_length = 0;
public:
  
    List() { m_head = NULL; }

    int len() {
        return m_length;
   }

    void push(T data) {
 
       
        Node<T>* newNode = new Node<T>(data);

     
        if (m_head == NULL) {
            m_head = newNode;
            return;
        }

        
        Node<T>* temp = m_head;
        while (temp->next != NULL) {

            
            temp = temp->next;
        }

        
        temp->next = newNode;
        
        m_length++;
    }

    void printList() {

        Node<T>* temp = m_head;

        
        if (m_head == NULL) {
            std::cout << "List empty" << std::endl;
            return;
        }

        
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }

    void pop(int index){
        Node<T>* temp1 = m_head, * temp2 = NULL;
        

        if (m_head == NULL) {
            std::cout << "List empty." << std::endl;
            return;
        }
        
        if (m_length < index) {
            std::cout << "Index out of range"<< std::endl;
            return;
        }

        
        temp1 = m_head;

        
        if (index == 1) {

            
            m_head = m_head->next;
            delete temp1;
            return;
        }

        
        while (index-- > 1) {

            
            temp2 = temp1;

           
            temp1 = temp1->next;
        }

        
        temp2->next = temp1->next;

        
        delete temp1;
    }
    
    ~List()
    {
        Node<T>* temp1 = m_head, * temp2 = NULL;
        while (temp1!=NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            delete temp2;
        }
        std::cerr << "Deleted all the pointers" << std::endl;
    }
};





