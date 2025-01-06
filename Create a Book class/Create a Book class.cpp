#include <iostream>
#include <string>
using namespace std;

class Book 

{
private:
    string title;   
    string author;  
    int pages;     

public:
    
    void setTitle(const string& newTitle) 
    {
        title = newTitle;
    }

    void setAuthor(const string& newAuthor) 
    {
        author = newAuthor;
    }

    void setPages(int newPages) 
    {
        if (newPages > 0) 
        {
            pages = newPages;
        }
        else 
        {
            cout << "Error: Кількість сторінок повинна бути більшою за 0." << std::endl;
        }
    }

   string getTitle() const
   {
        return title;
    }

   string getAuthor() const 
   {
        return author;
    }

    int getPages() const 
    {
        return pages;
    }
};

int main() 
{
    
    Book myBook;

    
    myBook.setTitle("Крижана людина");
    myBook.setAuthor("Каміла Соль");
    myBook.setPages(356);

     cout << "Назва книги: " << myBook.getTitle() <<"\n";
     cout << "Автор: " << myBook.getAuthor() << "\n";
     cout << "Кількість сторінок: " << myBook.getPages() << "\n";

    return 0;
}
