#include <iostream>
#include <fstream>

using namespace std;

const size_t BUFFER_SIZE = 1024 * 100;

int main() {
    
    ofstream outputFile("source.bin", ios::binary);
    if (!outputFile) {
        cerr << "Error: Could not create source.bin.\n";
        return 1;
    }

    
    char data[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };
    outputFile.write(data, sizeof(data)); 
    outputFile.close();  
    
    cout << "source.bin created successfully!\n";
    
    ifstream inputFile("source.bin", ios::binary);
    ofstream destinationFile("destination.bin", ios::binary);

    if (!inputFile) {
        cerr << "Error: Could not open source.bin.\n";
        return 1;
    }
    if (!destinationFile) {
        cerr << "Error: Could not open destination.bin.\n" ;
        return 1;
    }

    
    char buffer[BUFFER_SIZE];
    while (inputFile.read(buffer, BUFFER_SIZE) || inputFile.gcount() > 0) 
    {
        size_t bytesRead = inputFile.gcount();
        cout << "Read bytes: " << bytesRead << "\n";
        destinationFile.write(buffer, bytesRead);
    }

    inputFile.close();
    destinationFile.close();

    cout << "Binary copying complete. Check destination.bin\n";
    return 0;
}
