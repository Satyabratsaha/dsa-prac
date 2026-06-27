// ! LinkedList
#include<iostream>

// * Singly LinkedList
// class Node{
//     public:
//     int data;
//     Node *ptr;

//     Node():data(0), ptr(nullptr){}
// };
// int main(){
    // # head insertion
    // Node *head, *new_N;
    // head = NULL;
    // while(1){
    //     new_N = new Node();
    //     std::cout<<"Enter data(or press q to exit) ";
    //     if(!(std::cin>>new_N->data)){
    //         break;
    //     }
    //     if(head == NULL){
    //         new_N->ptr = nullptr;
    //         head = new_N;
    //     }
    //     else{
    //         new_N->ptr = head;
    //         head = new_N;
    //     }
    // }
    // Node *trk;
    // trk = head;
    // while(trk != NULL){
    //     std::cout<<trk->data<<" ";
    //     trk = trk->ptr;
    // }
    // # tail insertion
//     Node *head, *new_N, *tail;
//     head = nullptr;
//     tail = nullptr;
//     while(1){
//         new_N = new Node();
//         std::cout<<"Enter data(or press q to exit) ";
//         if(!(std::cin>>new_N->data)){
//             break;
//         }
//         if(head == nullptr){
//             new_N->ptr = nullptr;
//             head = new_N;
//             tail = new_N;
//         }
//         else{
//             tail->ptr = new_N;
//             tail = new_N;
//         }
//     }
//     Node *trk = head;
//     while(trk != nullptr){
//         std::cout<<trk->data<<" ";
//         trk = trk->ptr;
//     }
// }

// * Delete function
class Node{
    public:
    int data;
    Node *ptr;
    Node():data(0), ptr(nullptr){}

    void Delete(int n, Node *head){
        while(head != nullptr){
            if (head->data == n) {
                Node *temp = head->ptr->ptr;
                delete head->ptr;
                head->ptr = temp;
            }
            head = head->ptr;
        }
    }
};
int main(){
    Node obj, *head, *one, *two, *three, *tail;
    three = new Node();
    three->data = 3;
    tail = three;
    two = new Node();
    two->data = 2;
    two->ptr = three;
    one = new Node();
    one->data = 1;
    one->ptr = two;
    head = one;

    obj.Delete(3, head);
    
    Node *temp = head;
    while (temp != nullptr) {
        std::cout<<temp->data<<" ";
        temp = temp->ptr;
    }


}