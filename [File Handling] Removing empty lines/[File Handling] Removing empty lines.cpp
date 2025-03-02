#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) 
    {
        cerr << "Error opening file!\n";
        return 1;
    }

   string line;
    while (getline(inputFile, line)) {
        if (!line.empty()) 
        { 
            outputFile << line;
        }
    }

    inputFile.close();
    outputFile.close();

   cout << "Processing complete. Check output.txt\n" ;
    return 0;
}
