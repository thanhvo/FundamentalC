#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Book 
{
    char title[SIZE];
    char author[SIZE];
    int book_id;
};

int main(int argc, char const *argv[]) 
{
    struct Book book1, book2;

    // book 1 specification
    strcpy(book1.title, "C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan");
    book1.book_id = 1001;

    // book 2 specification
    strcpy(book2.title, "C: How to Program");
    strcpy(book2.author, "Paul Deitel");
    book2.book_id = 1002;

    // print book1 info
    printf( "Book1 title : %s\n", book1.title);
    printf( "Book1 author : %s\n", book1.author);
    printf( "Book1 book_id : %d\n", book1.book_id);

    // print book2 info
    printf( "Book2 title : %s\n", book2.title);
    printf( "Book2 author : %s\n", book2.author);
    printf( "Book2 book_id : %d\n", book2.book_id);
    
    return 0;
}