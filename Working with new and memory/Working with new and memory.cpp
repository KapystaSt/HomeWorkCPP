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
        cerr << "Помилка: некоректний формат числа!\n";
        throw;
    }
}

void AllocateMemory(size_t size)
{
    try
    {
        int* arr = new int[size];
        cout << "Пам'ять виділена успішно\n" ;
        delete[] arr;
    }
    catch (const bad_alloc&)
    {
        cerr << "Помилка: недостатньо пам’яті!\n";
    }
}

int main()
{
    try
    {
        cout << ParseInt("123") << endl;
        cout << ParseInt("abc")  ;
    }
    catch (const invalid_argument&)
    {

    }

    cout << endl; 

    AllocateMemory(10);
    AllocateMemory(100000000000);

    return 0;
}
