#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ifstream inputFile("source.txt");
    ofstream outputFile("destination.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening file!\n" ;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line ; 

    inputFile.close();
    outputFile.close();

    cout << "Copying complete. Check destination.txt\n" ;
    return 0;
}
