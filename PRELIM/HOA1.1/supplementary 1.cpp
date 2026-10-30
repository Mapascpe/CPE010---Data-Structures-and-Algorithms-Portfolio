#include <iostream>
//supplementary #1
void swapNum(double &fNum, double &sNum){
	double temp = fNum;
	fNum = sNum;
	sNum = temp;  
}

int main(){
	double fNum,sNum;
	std::cout<<"Enter Value A: ";
	std::cin>>fNum;
	std::cout<<"Enter Value B: ";
	std::cin>>sNum;
	std::cout<<"Value A: "<<fNum<<"\t Value B:"<<sNum<<std::endl;
	
	std::cout<<"Swapped Values: "<<std::endl;
	swapNum(fNum,sNum);
	std::cout<<"Value A: "<<fNum<<"\t Value B:"<<sNum<<std::endl;
	
	return 0;
}
