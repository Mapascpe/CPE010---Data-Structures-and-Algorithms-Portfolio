#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sortingAlgo.h"
#include <string>
#include <iomanip>

const int maxVotes = 100;
const int numCand = 5;

std::string candidates[numCand] = {

    "Bo Dalton Capistrano",
    "Cornelius Raymon Agustin",
    "Deja Jayla Banaga",
    "Lalla Brielle Yabut",
    "Franklin Relano Castro"
};

int main() {
    srand((unsigned int)time(NULL));

    int votes[maxVotes];

    for (int i = 0; i < maxVotes; i++) {
        votes[i] = (rand() % numCand) + 1;
    }
    //sort
    insertionSort(votes, maxVotes);

    std::cout <<" Votes (Sorted) " << std::endl;

    for (int i = 0; i < maxVotes; i++) {
        std::cout << votes[i] << " ";
        if ((i+1) % 20 == 0) { // just for organizing
            std::cout << std::endl;
        }
    }
    std::cout << "\n";

    int countVotes[numCand] = {0};
    for (int i = 0; i < maxVotes; i++) {
        countVotes[votes[i] - 1]++;
    }

    std::cout << std::left << std::setw(15) << "Candidate #";
    std::cout << std::setw(30) << "Candidate Name";
    std::cout << std::setw(15) << "Vote Count" << "\n";

    int highestVotes = -1;
    int winnerIndex = -1;

    for (int i = 0; i < numCand; i++) {
        std::cout << std::left << std::setw(15) << ("Candidate " + std::to_string(i + 1));
        std::cout << std::setw(30) << candidates[i];
        std::cout << std::setw(15) << countVotes[i] << "\n";

        if (countVotes[i] > highestVotes) {
            highestVotes = countVotes[i];
            winnerIndex = i;
        }
    }
    std::cout << " "<<std::endl;

    std::cout << "WINNER: Candidate " << (winnerIndex + 1) << " - ";
    std::cout << candidates[winnerIndex] << " with ";
    std::cout << highestVotes << " votes!\n";

    return 0;

}
