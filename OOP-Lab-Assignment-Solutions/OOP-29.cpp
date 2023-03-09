//OOP 29 - Book and BookStore
#include<iostream>
#include<set>
using namespace std;
class Book
{
    string isbn;
    string title;
    string *authors;
    double price;
    int noOfAuthors;
    friend class BookStore;
    public:
    void setData(string isbn,string title,string *author,int noOfAuthors,double price)
    {
        this->isbn = isbn;
        this->title = title;
        this->authors = new string[noOfAuthors];
        this->noOfAuthors = noOfAuthors;
        for(int i=0;i<noOfAuthors;i++)
        {
            this->authors[i]=author[i];
            this->price = price;
        }
    }
    void getData()
    {
        cout<<"ISBN   : "<<isbn<<"\nTitle  : "<<title<<"\nAuthors : ";
        for(int i=0;i<noOfAuthors-1;i++)
            cout<<authors[i]<<", ";
        cout<<authors[noOfAuthors-1];
        cout<<"\nPrice  : "<<price<<endl<<endl;
    }
};
class BookStore
{
    Book *listOfBooks;
    int noOfBooks;
    int noOfUniqueBooks;
    public:
    set<string> s;
    BookStore()
    {
        listOfBooks = new Book[15];
        noOfBooks = 0;
        noOfUniqueBooks=0;
    }
    void insert_book(Book b)
    {   
        this->listOfBooks[noOfBooks] = b;
        noOfBooks++;
    }
    set<string> books()
    {    
        for (int i = 0; i < noOfBooks; i++)
            s.insert(listOfBooks[i].isbn);
        noOfUniqueBooks = s.size();
        return s;
    }
    int noOfCopies(string isbn)
    {   
        int count=0;
        for (int i = 0; i < noOfBooks; i++)
            if(listOfBooks[i].isbn == isbn)
                count++;
        return count;
    }
    double totalPrice()
    {   
        double sum=0;
        for (int i = 0; i < noOfBooks; i++)
            sum+=listOfBooks[i].price;
        return sum;
    }
    void print(string ISBN,int i)
    {
        cout<<"ISBN : "<<ISBN<<"\t No. of copies : "<<noOfCopies(ISBN)<<"\t Title : "<<getTitle(ISBN)<<endl;   
    }
    string getTitle(string ISBN)
    {   
        for (int i = 0; i < noOfBooks; i++)
            if(listOfBooks[i].isbn == ISBN)
                return listOfBooks[i].title;
        return "No data found";
    }
};
int main()
{
    Book b[15];
    string authors[5][4]={{"George Friedman"},{"Jack Welch","Robert Slater"},{"A. P. J. Abdul Kalam","Arun Tiwari"},
        {"Matthew Sands","Richard Feynman","Robert Leighton"},{"Thomas Cormen","Charles Leiserson","Ronald Rivest","Clifford Stein"}};
    b[0].setData("9780307476395","The Next Decade",authors[0],1,585.00);
    b[1].setData("9780070533028","Jack Welch and the GE Way",authors[1],2,590.00);
    b[2].setData("9780070533028","Jack Welch and the GE Way",authors[1],2,590.00);
    b[3].setData("9788173711466","Wings of Fire",authors[2],2,279.00);
    b[4].setData("9788173711466","Wings of Fire",authors[2],2,279.00);
    b[5].setData("9788173711466","Wings of Fire",authors[2],2,279.00);
    b[6].setData("9788173711466","Wings of Fire",authors[2],2,279.00);
    b[7].setData("9783486209495","The Feynman Lectures on Physics",authors[3],3,840.00);
    b[8].setData("9783486209495","The Feynman Lectures on Physics",authors[3],3,840.00);
    b[9].setData("9783486209495","The Feynman Lectures on Physics",authors[3],3,840.00);
    b[10].setData("9780262530910","Introduction to Algorithms",authors[4],4,635.00);
    b[11].setData("9780262530910","Introduction to Algorithms",authors[4],4,635.00);
    b[12].setData("9780262530910","Introduction to Algorithms",authors[4],4,635.00);
    b[13].setData("9780262530910","Introduction to Algorithms",authors[4],4,635.00);
    b[14].setData("9780262530910","Introduction to Algorithms",authors[4],4,635.00);
    BookStore BS;
    cout<<"Book-Store : \n"<<endl;
    for (int i = 0; i < 15; i++)
        BS.insert_book(b[i]);
    set<string> isbn = BS.books();
    set<string>::iterator iter; int index=0;
    for (iter = isbn.begin() ; iter != isbn.end() ; iter++,index++)
        BS.print(*iter,index);  // printing all books-details
    cout<<"\nTotal price of all books available in book store : "<<BS.totalPrice()<<endl;
    return 0;
}