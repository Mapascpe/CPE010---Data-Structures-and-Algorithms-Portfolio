#include <iostream>

class Triangle{
private:
    double totalAngle, angleA, angleB, angleC;
public:
    //constructor
    Triangle(double A, double B, double C);
    void setAngles(double A, double B, double C);
    const bool validateTriangle();
    double getArea(double base, double height);
    double Perimeter(double A, double B, double C);
    const char angleType();
};

int main(){
    std::cout<<"The shape has the sides of 40, 30, and 110"<<std::endl;
    Triangle setl(40,30,110);

    if(setl.validateTriangle()){
        std::cout<<"The shape is a valid triangle \n";
        std::cout<<"The perimeter of the triangle is: "<<setl.Perimeter(40,30,110)<<std::endl;
        std::cout<<"The area of the triangle with base: 40 and height: 30 is: "<<setl.getArea(40,30)<<std::endl;
        std::cout<<"This triangle is an " << setl.angleType()<<std::endl;
    }
    else{
        std::cout<<"Not a triangle";
    }
    return 0;
}

Triangle::Triangle(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;

}

void Triangle::setAngles(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}

const bool Triangle::validateTriangle(){
    return(totalAngle == 180);
}

double Triangle::getArea(double base, double height) {
    double area = 0.5 * (base*height);
    return area;
}

double Triangle::Perimeter(double A, double B, double C) {
    double perimeter = A+B+C;
    return perimeter;
}

const char Triangle::angleType() {
    if (angleA == 90 or angleB == 90 or angleC == 90) {
        std::cout<<"Right Angle"<<std::endl;
    }
    else if ( angleA > 90 or angleB > 90 or angleC > 90 ) {
        std::cout<<"Obtuse Angle"<<std::endl;
    }
    else{ std::cout<<"Acute Angle"<<std::endl;}

}
