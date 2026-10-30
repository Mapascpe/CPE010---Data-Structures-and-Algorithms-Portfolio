#include <iostream>
#include <string>
#include"Supplementary_listStack.h"

bool isMatching(char a, char b);
bool balanceCheck(const std::string& expression);

int main() {
    std::string inpExpression;
    std::cout << "Balance Checker (Input halt to exit)" << std::endl;

    while (true) {
        std::cout<<"Enter expression: ";
        std::getline(std::cin, inpExpression);
        if (inpExpression == "" || inpExpression == "halt") break;

        bool isValidExpression = balanceCheck(inpExpression);
        std::cout << "Valid? (Y/N)    : " << (isValidExpression ? "Y" : "N") << "\n";
    }

    return 0;
}

bool isMatching(char a, char b) {
    if (a == '(' && b == ')') return true;
    if (a == '{' && b == '}') return true;
    if (a == '[' && b == ']') return true;
    return false;
}

bool balanceCheck(const std::string& expression) {
    ListStack<char> stack;
    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.isEmpty()) return false;
            char topChar = stack.pop();
            if (!isMatching(topChar, ch)) {
                return false;
            }
        }
    }
    return stack.isEmpty();
}
