#include <iostream>
#include <vector>
#include <memory> 

using namespace std;

class Instrument {
public:
    virtual void playSound() const = 0; 
    virtual ~Instrument() = default;   
};


class Piano : public Instrument {
public:
    void playSound() const override {
        cout << "Playing piano sound \n";
    }
};


class Guitar : public Instrument {
public:
    void playSound() const override {
       cout << "Playing guitar sound \n" ;
    }
};

int main() {
   
   vector<unique_ptr<Instrument>> instruments;

    
    instruments.push_back(make_unique<Piano>());
    instruments.push_back(make_unique<Guitar>());

    
    for (const auto& instrument : instruments) {
        instrument->playSound();
    }

    return 0;
}
