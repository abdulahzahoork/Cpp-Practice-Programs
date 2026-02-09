// Problem: Multi-level Inheritance

// Create three classes:
// Animal
// - eat()

// Mammal : public Animal
// - walk()

// Dog : public Mammal
// - bark()

// Task: Call all three functions using a Dog object.

#include <iostream>
using namespace std;

class Animal {
public: 
    void eat() const {
        cout << "Animals eat food." << endl;
    }
};

class Mammal : public Animal{
public: 
    void walk() const {
        eat();
        cout << "Mammals walk." << endl;
    }
};

class Dog : public Mammal {
public: 
    void bark() const {
        walk();
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog rody;
    rody.bark();

    return 0;
}

