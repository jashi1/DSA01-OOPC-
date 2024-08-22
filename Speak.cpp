#include <iostream>
#include <string>
class Animal {
public:
    Animal(std::string name) : name(name) {}
    virtual void speak() = 0; 
    std::string getName() { return name; }
    private:
    std::string name;
};
class Dog: public Animal {
public:
    Dog(std::string name) : Animal(name) {}
    void speak() {
        std::cout << getName() << " woof." << std::endl;
    }
};
class Cat : public Animal {
public:
    Cat(std::string name) : Animal(name) {}
    void speak()  {
        std::cout << getName() << " Meow." << std::endl;
    }
};
int main() {
    Dog d("Dog");
    Cat c("Cat");
    d.speak();
    c.speak();
    return 0;
}
