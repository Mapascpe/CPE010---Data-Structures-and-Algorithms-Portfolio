

#ifndef SEARCHINGALGO_H
#define SEARCHINGALGO_H



template <typename T>
void linearSearchArr(int arrSize,T dataFind,T list[]) {

    //step 1: I = 0
    int i = 0;
    //repeat while I <= n
    while (i < arrSize) {
        if (dataFind == list[i]) {
            std::cout <<"Searching is successful\n";
            return;
        }
        i++;
    }
    //Print unsuccessful
    std::cout <<"Searching is Unsuccessful"<<std::endl;
}

template <typename T>
void linearSearchLL(Node<T>* head, T dataFind) {

    while (head != nullptr) {
        if (head->data == dataFind) {
            std::cout <<"Searching is successful\n";
            return;
        }
        head = head->next;
    }
    std::cout <<"Searching is unsuccessful"<<std::endl;
}

template <typename T>
Node<T>* getMiddle(Node<T>* start,Node<T>* last ) {

    Node<T>* slow = start;
    Node<T>* fast = start;

    while (fast != last && fast->next != last) {
        // move slow one step
        slow = slow->next;

        //move fasr two steps
        fast = fast->next->next;

    }
    return slow;
}

template <typename T>
void binarySearchLL(Node<T>* start, T dataFind) {
    Node<T>* last = nullptr;

    while (start != last) {
        Node<T>* middle = getMiddle(start, last);
        if (middle == nullptr) {
            return;
        }
        if (middle->data == dataFind) {
            std::cout <<"Searching is successful\n";
            return;
        }
        else if (middle->data > dataFind) {
            last = middle;

        }
        else {
            start = middle->next;
        }
    }
    std::cout <<"Searching is unsuccessful"<<std::endl;


}

//for array binary search
template <typename T>
void binarySearchArr(int arrSize,T dataFind, T list[]) {
    //define low high and middle
    int low = 0, up = arrSize - 1, middle;
    //loop while low iis less than or equal to high
    while (low <= up) {
        //compute for middle
        middle = (int((low + up)) / 2);
        //if data found is middle -> data found -> return
        if (dataFind == list[middle]) {
            std::cout <<"Searching is successful\n";
            return;
        }
        // if data find < data middle ->new high
        else if (dataFind < list[middle]) {
            up = middle - 1;

        }
        //else update low = middle + 1
        else {
            low = middle + 1;
        }

    }
    //search is not found
    std::cout <<"Searching is unsuccessful"<<std::endl;

}

template <typename T>
int countInstancesArr(int arrSize, T dataFind, T list[]) {
    int count = 0;
    int i = 0;
    while (i < arrSize) {
        if (dataFind == list[i]) {
            count++;
        }
        i++;
    }
    return count;
}

template <typename T>
void recursiveBinarySearchArr(int low, int up, T dataFind, T list[]) {
    if (low <= up) {
        int middle = (low + up) / 2;
        if (dataFind == list[middle]) {
            std::cout <<"Searching is successful\n";
            return;
        }
        else if (dataFind < list[middle]) {
            recursiveBinarySearchArr(low, middle - 1, dataFind, list); //left
        }
        else {
            recursiveBinarySearchArr(middle + 1, up, dataFind, list); //right
        }
    }
    else {
        std::cout <<"Searching is unsuccessful\n";
    }
}
#endif
