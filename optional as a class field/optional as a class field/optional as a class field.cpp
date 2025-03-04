#include <iostream>
#include <string>
#include <optional>
using namespace std;

class Person 
{
    public:
    
    Person(const string& name, optional<string> phoneNumber = nullopt): name(name), phoneNumber(phoneNumber) 
    {

    }

    
    void Print() const 
    {
        if (phoneNumber.has_value()) 
        {
            cout << name << ", Телефон: " << *phoneNumber << endl;
        }
        else 
        {
            cout << name << ", Телефон: Номер відсутній\n";
        }
    }

private:
    string name;  
    optional<string> phoneNumber;  
};

int main() 
{
    Person p1("Alice", "123-456");  
    Person p2("Bob");  

    p1.Print();  
    p2.Print();  

    return 0;
}
