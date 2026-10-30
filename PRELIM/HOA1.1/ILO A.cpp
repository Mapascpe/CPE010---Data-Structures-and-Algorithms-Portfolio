#include <iostream>

class Operations {
	public:
		int sumOfTwoNum(int fNum, int sNum);
		const bool greaterThan(int fNum, int sNum);
};

const bool logicalOp(bool fNum, bool sNum);

int main(){
	Operations num;
    std::cout<<"the sum of the two numbers is: " <<num.sumOfTwoNum(6,7)<<std::endl;
	std::cout<<std::endl;
    num.greaterThan(6,7);
	std::cout<<std::endl;
	logicalOp(1,1);

    return 0;
}

int Operations::sumOfTwoNum(int fNum, int sNum){
	int sum = fNum + sNum;
	return sum;
}

const bool Operations::greaterThan(int fNum, int sNum){
	bool value = fNum > sNum;
	std::cout << "Is variable A greater than B? " << std::boolalpha << value << std::endl;
	return true;
}

const bool logicalOp(bool fNum, bool sNum){
	bool bit_And = fNum && sNum;
	bool bit_Or = fNum || sNum;
	bool bit_Xor = fNum ^ sNum;
	bool bit_Not = !fNum;
	bool bit_Not2 = !sNum;
	std::cout << "Results are: " << std::boolalpha << "Logical"<<"\n AND: "
	<< bit_And << " \n OR: " << bit_Or << "\n Xor: "
	<< bit_Xor << " \n NOT: " << "\n for variable 1: " << bit_Not
	<<"\n for variable 2: "<< bit_Not2<< std::endl;
	return true;
}


