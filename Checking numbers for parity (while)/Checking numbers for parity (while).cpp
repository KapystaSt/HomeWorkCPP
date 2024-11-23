
    #include <iostream>
    using namespace std;

    int main() 

    {
        
        int number; 

        cout << "Введіть число: ";
        cin >> number; 

        while (number != 0) 
        {
            
            if (number % 2 == 0) 
            cout << number << " - парне" << endl;

            if (number % 2 != 0) 
            cout << number << " - непарне" << endl;

            cout << "Введіть число: "; 
            cin >> number; 
        }

        return 0;
    }
  



