#include <iostream>
using namespace std;

struct Car {
    string name;      // ?? car ka naam bhi store karenge
    int maxSpeed;
    string engine;
    int tyre;
    Car *next;
};

int main() {
    Car Audi, Bmw, Jaguar, RollsRoyce;

    Audi.name = "Audi";
    Audi.maxSpeed = 300;
    Audi.engine = "Petrol";
    Audi.tyre = 4;

    Bmw.name = "BMW";
    Bmw.maxSpeed = 340;
    Bmw.engine = "Petrol";
    Bmw.tyre = 4;

    Jaguar.name = "Jaguar";
    Jaguar.maxSpeed = 380;
    Jaguar.engine = "Petrol";
    Jaguar.tyre = 4;

    RollsRoyce.name = "RollsRoyce";
    RollsRoyce.maxSpeed = 400;
    RollsRoyce.engine = "Diesel";
    RollsRoyce.tyre = 6;
    RollsRoyce.next = nullptr;

    Audi.next = &Bmw;
    Bmw.next = &Jaguar;
    Jaguar.next = &RollsRoyce;

    Car *head = &Audi;

    while (head != nullptr) {
        cout << head->name << " -> "
             << "Speed: " << head->maxSpeed 
             << ", Engine: " << head->engine 
             << ", Tyres: " << head->tyre 
             << endl;
        head = head->next;
    }

    return 0;
}
