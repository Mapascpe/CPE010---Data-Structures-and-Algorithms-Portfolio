#ifndef QUEUEARR_H
#define QUEUEARR_H

class Queue {
    private:
    char* q_array;
    int q_capacity;
    int q_size;
    int q_front;
    int q_back;
    public:
    // Constructor
    Queue(int size = 6) {
        q_capacity = size;
        q_array = new char[q_capacity];
        q_size = 0;
        q_front = 0;
        q_back = -1;
    }
    // Deconstructor
    ~Queue() {
        delete[] q_array;
    }
    // Copy Constructor
    Queue(const Queue& other) {
        q_capacity = other.q_capacity;
        q_array = new char[q_capacity];
        q_size = other.q_size;
        q_front = other.q_front;
        q_back = other.q_back;
        for (int i = 0; i < q_capacity; i++) {
            q_array[i] = other.q_array[i];
        }
    }
    // Copy Assignment Operator
    Queue& operator=(const Queue& other) {
        if (this != &other) {
            delete[] q_array;
            q_capacity = other.q_capacity;
            q_array = new char[q_capacity];
            q_size = other.q_size;
            q_front = other.q_front;
            q_back = other.q_back;
            for (int i = 0; i < q_capacity; i++) {
                q_array[i] = other.q_array[i];
            }
        }
        return *this;
    }

    bool empty() const {
        return (q_size == 0);
    }

    int size() const {
        return q_size;
    }

    void clear() {
        q_size = 0;
        q_front = 0;
        q_back = -1;
    }

    char front() const {
        if (empty()) {
            std::cout << "Queue is empty" << std::endl;
            return '\0';
        }
        return q_array[q_front];
    }

    char back() const {
        if (empty()) {
            std::cout << "Queue is empty" << std::endl;
            return '\0';
        }
        return q_array[q_back];
    }

    void enqueue(char value) {
        if (q_size == q_capacity) {
            std::cout << "Queue is full" << std::endl;
            return;
        }
        q_back = (q_back + 1) % q_capacity;
        q_array[q_back] = value;
        q_size++;
        std::cout << "Enqueued: " << value << " \n";
    }

    void dequeue() {
        if (empty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        std::cout << "Dequeued: " << q_array[q_front]<<std::endl;
        q_front = (q_front + 1) % q_capacity;
        q_size--;
    }

    void display() const {
        if (empty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        std::cout << "The Queue (front to back): ";
        for (int i = 0; i < q_size; i++) {
            int index = (q_front + i) % q_capacity;
            std::cout << q_array[index] << " ";
        }
        std::cout << std::endl;
    }

};

#endif