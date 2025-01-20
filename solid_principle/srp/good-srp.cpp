#include <iostream>
#include <string>
#include <vector>

// Class to handle book information
class Book {
public:
    Book(const std::string& title, const std::string& author)
        : title(title), author(author) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }

private:
    std::string title;
    std::string author;
};

// Class to handle book printing
class BookPrinter {
public:
    static void printBook(const Book& book) {
        std::cout << "Title: " << book.getTitle() << std::endl;
        std::cout << "Author: " << book.getAuthor() << std::endl;
    }
};

// Class to handle book storage
class BookRepository {
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    const std::vector<Book>& getBooks() const {
        return books;
    }

private:
    std::vector<Book> books;
};

int main() {
    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");

    BookRepository repository;
    repository.addBook(book1);
    repository.addBook(book2);

    for (const auto& book : repository.getBooks()) {
        BookPrinter::printBook(book);
    }

    return 0;
}