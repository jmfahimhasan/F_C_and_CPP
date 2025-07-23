#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;
    double cgpa; // Using double for more precise CGPA

    void displayInfo() {
        cout << "Name : " << name << endl;
        cout << "ID   : " << id << endl;
        cout << "CGPA : " << cgpa << endl << endl;
    }
};

int main() {
    Student fahim, alif;

    fahim.name = "Fahim";
    fahim.id = 1079;
    fahim.cgpa = 3.75;

    alif.name = "Alif";
    alif.id = 1080;
    alif.cgpa = 3.89;

    fahim.displayInfo();
    alif.displayInfo();

    return 0;
}