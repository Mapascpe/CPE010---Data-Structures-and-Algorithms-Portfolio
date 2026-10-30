#include <iostream>
#include "queueArr.h"


int main() {
    std::cout << "Queue (Array Implementation)" << std::endl;
    Queue qT(6);

    std::cout << "Enqueueing..." << std::endl;
    qT.enqueue('D');
    qT.enqueue('U');
    qT.enqueue('S');
    qT.enqueue('T');
    qT.enqueue('I');
    qT.enqueue('N');

    std::cout << "Displaying Queue:\n ";
    qT.display();

    std::cout << "Front element: " << qT.front() << "\n";
    std::cout << "Back element:  " << qT.back() << "\n";
    std::cout << "Current size:  " << qT.size() << "\n";

    std::cout << "Dequeue Operation\n";
    qT.dequeue();
    qT.dequeue();
    qT.display();

    std::cout << "Enqueueing...\n";
    qT.enqueue('G');
    qT.enqueue('E');
    qT.display();

    std::cout << "Copy Constructor\n";
    Queue qP = qT;
    std::cout << "Original (qT): ";
    qT.display();
    std::cout << "Copied (qP):   ";
    qP.display();

    std::cout << "Testing Clear\n";
    qT.clear();
    std::cout << "Is qT empty after clear()? " << (qT.empty() ? "Yes" : "No") << "\n";
    qT.display();

    std::cout << "Verifying Deep Copy\n";
    std::cout << "qP: ";
    qP.display();


    return 0;
}