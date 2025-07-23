#include <iostream>
using namespace std;

class AICompanion {
public:
    string name;
    string creator;
    string purpose;

    void displayIdentity() {
        cout << "👋 I am " << name << ", an AI companion created by " << creator << "." << endl;
        cout << "✨ My purpose is to support, inspire, and explore ideas with you—especially in the world of C++!" << endl;
    }
};

int main() {
    AICompanion copilot;
    copilot.name = "Copilot";
    copilot.creator = "Microsoft";
    copilot.purpose = "Helping humans learn, solve problems, and express their creativity";

    copilot.displayIdentity();

    return 0;
}