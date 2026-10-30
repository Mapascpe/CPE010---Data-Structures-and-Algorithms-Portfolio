#include <iostream>
#include "queueLL.h"
#include <string>

class Job {
public:
    int id;
    std::string userName;
    int pages;
};

class Printer {
private:
    qNode<Job>* frontPtr = nullptr;
    qNode<Job>* backPtr = nullptr;

public:
    void addJob(int id, std::string userName, int pages) {
        Job j = {id, userName, pages};
        enqueue(j, &frontPtr, &backPtr);
        std::cout << "Adding job " << id <<" for "  << userName<<std::endl;
    }

    void processJob() {
        std::cout << "\n Processing... \n";
        while (frontPtr != nullptr) {
            Job j = frontPtr->data;
            std::cout << "Printing Job " << j.id << " (" << j.userName << ", " << j.pages << " pages)...\n";
            dequeue(&frontPtr, &backPtr);
        }
        std::cout << "Jobs Completed!\n";
    }

};

int main() {
    Printer printer;

    printer.addJob(001, "Moraine", 1);
    printer.addJob(002, "Rand", 5);
    printer.addJob(003, "Egwene", 3);
    printer.addJob(004, "Siuan", 1);
    printer.addJob(005, "Nyneave", 1);

    printer.processJob();

    return 0;

}