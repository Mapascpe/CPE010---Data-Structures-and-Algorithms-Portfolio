#include <iostream>
//supplementary #2
double convTemp(double kelvin){
	double fahrenheit = 1.8 * (kelvin - 273) + 32;
	return fahrenheit;

}
int main(){
	double kelvin;
	std::cout<<"Kelvin to Fahrenheit"<<std::endl;
	std::cout<<"Enter temperature in Kelvin: ";
	std::cin>>kelvin;
	std::cout<<"Kelvin: "<<kelvin<< "\nFahrenheit: " << convTemp(kelvin)<< std::endl;

	return 0;
}
