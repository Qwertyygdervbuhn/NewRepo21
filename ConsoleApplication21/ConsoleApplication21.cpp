#include <iostream>

using namespace std;

class Drob {
private:
    int numerator;
    int denominator;

public:

    Drob(int num = 1, int den = 1) {
        if (den == 0) {
            denominator = 1;
        }
        else {
            denominator = den;
        }
        numerator = num;
    }


    int GetX() {
        return numerator;
    }


    void SetY(int den) {
        if (den == 0) {
            denominator = 1;
        }
        else {
            denominator = den;
        }
    }
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    srand(time(0));


    Drob fraction1(4, 9);
    Drob fraction2(rand() % 10 + 1, rand() % 10 + 1);
    cout << "Drob 1 (rand): ";
    fraction1.display();

    cout << "drob 2 (rand): ";
    fraction2.display();


    cout << "Drob 1 (GetX): " << fraction1.GetX() << endl;


    fraction1.SetY(9);
    cout << "Drob 1 later (SetY): ";   // этот код я написал с небольшой помощью интернета (находил новые команды). Было интересно найти ещё что-то для себя нового
    fraction1.display();

    return 0;
}

