#include <iostream>
#include <string>

class Grocery {
    protected:
        std::string name;
        int price;
        int quantity;
    public:
        //Constructor
        Grocery(std::string theName, int thePrice, int theQuantity) {
            name = theName;
            price = thePrice;
            quantity = theQuantity;

        }
        void display() {
            std::cout << name << " " << quantity << "x " << "Php " << price << std::endl;
        }

        // copy constructor
        Grocery(const Grocery& other) {
            name = other.name;
            price = other.price;
            quantity = other.quantity;
        }

        // copy assignment operator
        Grocery& operator=(const Grocery& other) {
            if (this != &other) {
                name = other.name;
                price = other.price;
                quantity = other.quantity;
            }
            return *this;
        }

        int calcSum() {
            int sum = price * quantity;
            return sum;
        }

        // deconstructor
    virtual ~Grocery() {
            std::cout <<  name << " has been DESTRUCTED" << std::endl;
        }



};

class Fruit:public Grocery {
    public:
    Fruit(std::string theName, int thePrice, int theQuantity): Grocery(theName, thePrice, theQuantity) {}

};

class Vegetable:public Grocery {
    public:
    Vegetable(std::string theName, int thePrice, int theQuantity): Grocery(theName, thePrice, theQuantity) {}


};

int totalSum(Grocery* List[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (List[i] != nullptr) {
            sum += List[i]->calcSum();
        }
    }
    return sum;

}
int main () {
    Grocery* GroceryList[4];
    GroceryList[0] = new Fruit("Apple",10,7);
    GroceryList[1] = new Fruit("Banana",10,8);
    GroceryList[2] = new Vegetable("Broccoli",60,12);
    GroceryList[3] = new Vegetable("Lettuce",50,10);

    std::cout << "Jenna's Grocery List:\n "<< std::endl;
    for (int i = 0; i < 4; i++) {
        GroceryList[i]->display();
        std::cout<<"Total: " <<GroceryList[i]->calcSum()<<std::endl;
    }

    std::cout<<"\nTotal Bill: "<< "Php "<<totalSum(GroceryList,4)<<std::endl;

    delete GroceryList[3];
    GroceryList[3] = nullptr;
    std::cout<<" "<<std::endl;

    // Loop without lettuce
    for (int i = 0; i < 4; i++) {
        if (GroceryList[i] != nullptr) {
            GroceryList[i]->display();
            std::cout<<"Total: " <<GroceryList[i]->calcSum()<<std::endl;
        }
    }

    std::cout<<"\nTotal Bill: "<< "Php "<<totalSum(GroceryList,4)<<std::endl;

return 0;
}
