#include<iostream>
// * STACK LIFO
// class Node{
//     public:
//     int data;
//     Node *ptr;
//     Node():data(0), ptr(nullptr){};
// };
// class List{
//     public:
//     Node *head, *tail;
//     List():head(nullptr), tail(nullptr){}

//     void push(int n) {
//         Node *new_N = new Node();
//         if (this->head == nullptr) {
//             new_N->data = n;
//             new_N->ptr = nullptr;
//             this->head = new_N;
//             this->tail = new_N;
//         }else {
//             new_N->data = n;
//             new_N->ptr = this->head;
//             this->head = new_N;
//         }
//     }
    
//     void pop() {
//         if (this->head != nullptr) {
//             Node *temp = this->head;
//             this->head = this->head->ptr;
//             delete temp;
//             if (this->head == nullptr) {
//                 this->tail = nullptr;
//             }
//         }else {
//             std::cout<<"stack empty";
//         }
//     }

//     void display() {
//         Node *temp = this->head;
//         while (temp != nullptr) {
//             std::cout<<temp->data<<" ";
//             temp = temp->ptr;
//         }
//         std::cout<<"\n";
//     }
// };

// int main(){
//     List obj;
//     obj.push(1);
//     obj.push(2);
//     obj.push(3);
//     obj.push(4);
//     obj.display();
//     obj.pop();
//     obj.display();
// }

// * QUEUE FIFO 
// class Node{
//     public:
//     int data;
//     Node *ptr;
//     Node():data(0), ptr(nullptr){}
// };
// class List{ // List has a Node "has-a" relation
//     public:
//     Node *head, *tail;
//     List():head(nullptr), tail(nullptr){}

//     void enque(int n) {
//         Node *new_N = new Node();
//         if (head == nullptr) {
//             new_N->data = n;
//             new_N->ptr = nullptr;
//             head = new_N; 
//             tail = new_N; 
//         }else {
//             new_N->data = n;
//             new_N->ptr = nullptr;
//             tail->ptr = new_N;
//             tail = new_N;
//         }
//     }

//     void deque() {
//         if (head != nullptr) {
//             Node *temp = head;
//             head = head->ptr;
//             delete temp;
//             if (head == nullptr) {
//                 tail = nullptr;
//             }
//         }else {
//             std::cout<<"Queue is empty"<<"\n";
//         }
//     }

//     void display() {
//         if (head == nullptr) {
//             std::cout<<"Queue is empty"<<"\n";
//         }else {
//             Node *temp = head;
//             while (temp != nullptr) {
//                 std::cout<<temp->data<<" ";
//                 temp = temp->ptr;
//             }
//         }
//     }
// };
// int main() {
//     List obj;
//     obj.enque(1);
//     obj.enque(2);
//     obj.enque(3);
//     obj.enque(4);
//     obj.enque(5);
//     obj.display();
//     obj.deque();
//     obj.deque();
//     obj.deque();
//     obj.deque();
//     obj.deque();
//     obj.display();
// }

// * DEQUE both LIFO & FIFO
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node():data(0), prev(nullptr), next(nullptr){}
};
class Deque{
    public:
    Node *head, *tail;
    Deque():head(nullptr), tail(nullptr){}

    void push_front(int n) {
        Node *new_N = new Node();
        if (head == nullptr) {
            new_N->data = n;
            new_N->prev = nullptr;
            new_N->next = nullptr;
            head = new_N;
            tail = new_N;
        }else {
            new_N->data = n;
            new_N->prev = nullptr;
            new_N->next = head;
            head->prev = new_N;
            head = new_N;
        }
    }
    
    void push_back(int n) {
        Node *new_N = new Node();
        if (tail == nullptr) {
            new_N->data = n;
            new_N->prev = nullptr;
            new_N->next = nullptr;
            tail = new_N;
            head = new_N;
        }else {
            new_N->data = n;
            new_N->prev = tail;
            new_N->next = nullptr;
            tail->next = new_N;
            tail = new_N;
        }        
    }
    
    void pop_front() {
        if (head != nullptr) {
            Node *temp = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }else {
                tail = nullptr;
            }
            delete temp;
        }else {
            std::cout<<"Deque is empty";
        }
    }

    void pop_back() {
        if (tail != nullptr) {
            Node *temp = tail;
            tail = tail->prev;
            if (tail != nullptr) {
                tail->next = nullptr;
            }else {
                head = nullptr;
            }
            delete temp;
        }else {
            std::cout<<"Deque is empty";
        }       
    }

    void display() {
        if (head != nullptr) {
            Node *temp = head;
            while (temp != nullptr) {
                std::cout<<temp->data<<" ";
                temp = temp->next;
            }
        }else {
            std::cout<<"Deque is empty";
        }
    }
};
int main() {
    Deque obj;
    obj.push_front(1);
    obj.push_front(2);
    obj.push_front(3);
    obj.push_back(4);
    obj.push_back(5);
    obj.push_back(6);
    obj.display();
    std::cout<<"\n";
    obj.pop_back();
    obj.pop_front();
    obj.display();
    std::cout<<"\n";
    obj.pop_back();
    obj.pop_front();
    obj.display();
    std::cout<<"\n";
    obj.pop_back();
    obj.pop_front();
    obj.display();
}