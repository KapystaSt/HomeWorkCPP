#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int ParseInt(const string& str) 
{
    try 
    {
        return stoi(str);
    }
    catch (const invalid_argument&) 
    {
        cerr << "Помилка: некоректний формат числа!\n" ;

        throw; 
    }
}

int main() 
{
    try 
    {
        cout << ParseInt("123") <<("\n");
  
        cout << ParseInt("abc");  
    }
    catch (const invalid_argument&) 
    {
        
    }
    return 0;
}
