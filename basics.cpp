// implementation of arithmetic progression formula
// #include<iostream>
// int main(){
//     int n=500;
//     std::cout<<(n*(n+1))/2;
//     std::cout<<"this is a test"<<"\n";
// }

// dynamic array implementation test
// #include<iostream>
// int main(){
//     int a=10;
//     int arr[a];
//     std::cout<<sizeof(arr)<<"\n";
//     while(true){
//         std::cout<<"Enetr::";
//         std::cin>>a;
//         std::cout<<sizeof(arr)<<"\n";
//     }
//     return 0;
// }
#include <iostream>

class DynamicArray {
private:
    int* arr;       // Pointer to heap memory
    int capacity;   // Total memory slots allocated
    int size;       // Number of elements currently added

    // Internal helper function to resize the array when full
    void resize() {
        capacity *= 2; // Double the capacity
        int* temp = new int[capacity]; // Allocate a new, larger block

        // Copy old elements to the new block
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr; // Free the old memory block from the heap
        arr = temp;   // Point to the new block
    }

public:
    // Constructor: Start with a small default capacity
    DynamicArray() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    // Destructor: Crucial to prevent memory leaks!
    ~DynamicArray() {
        delete[] arr; 
    }

    // Add an item to the end
    void push_back(int value) {
        if (size == capacity) {
            resize(); // Grow if full
        }
        arr[size] = value;
        size++;
    }

    // Get an item at a specific index
    int get(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return -1; // Basic error handling
    }

    int getSize() const { return size; }
    int getCapacity() const { return capacity; }
};

int main() {
    DynamicArray da;

    da.push_back(10);
    da.push_back(20);
    
    std::cout << "Size: " << da.getSize() << ", Capacity: " << da.getCapacity() << "\n";

    da.push_back(30); // This will trigger a resize!
    
    std::cout << "Size: " << da.getSize() << ", Capacity: " << da.getCapacity() << "\n";
    std::cout << "Element at index 2: " << da.get(2) << "\n";

    return 0;
}