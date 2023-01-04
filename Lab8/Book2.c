#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Book 
{
    char title[SIZE];
    char author[SIZE];
    int book_id;
};

void print_book_info(struct Book *book)
{
    printf( "Title : %s\n", book->title);
    printf( "Author : %s\n", book->author);
    printf( "book_id : %d\n", book->book_id);
}

void set_book_data(struct Book *book, const char* title, const char* author, const int book_id)
{
    strcpy(book->title, title);
    strcpy(book->author, author);
    book->book_id = book_id;
}

int main(int argc, char const *argv[]) 
{
    struct Book book1, book2;

    // book 1 specification
    set_book_data(&book1, "C Programming Language", "Brian W. Kernighan", 1001);

    // book 2 specification
    set_book_data(&book2, "C: How to Program", "Paul Deitel", 1002);

    print_book_info(&book1);

    print_book_info(&book2);
    
    return 0;
}