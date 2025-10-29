#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double calculateCost(double weight) {
        return 0;
    }
};

class StandardDelivery : public Delivery {
public:
    double calculateCost(double weight) override {
        return 10 + weight * 2;
    }
};

class ExpressDelivery : public Delivery {
public:
    double calculateCost(double weight) override {
        return 20 + weight * 3;
    }
};

int main() {
    Delivery* d;
    StandardDelivery s;
    ExpressDelivery e;

    d = &s;
    cout << "Standard Delivery Cost: " << d->calculateCost(5) << endl;

    d = &e;
    cout << "Express Delivery Cost: " << d->calculateCost(5) << endl;

    return 0;
}
