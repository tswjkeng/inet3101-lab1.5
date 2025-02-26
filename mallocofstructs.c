#include <stdio.h>
#include <stdlib.h>

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_books = atoi(argv[1]);

    struct book* bookArray = (struct book*)malloc(num_books * sizeof(struct book));

    printf("\n\nPlease enter information for %d elements. Enter a character and a number like ( a 1, b 2, etc) :\n\n", num_books);

    for (int i = 0; i < num_books; i++) {
        printf("Book %d: ", i + 1);
        printf("Enter title: ");
        scanf("%s", bookArray[i].bookTitle);  
        printf("Enter book number: ");
        scanf("%d", &bookArray[i].bookNumber);
        printf("Enter number of pages: ");
        scanf("%d", &bookArray[i].bookPages);
    }

    //print out all the structs in the array

    printf("\nHere is the data in all of the structs in the allocated memory: ");
    for (int i = 0; i < num_books; i++) {
        printf("Book %d: Title: %s, Number: %d, Pages: %d\n",
            i + 1, bookArray[i].bookTitle, bookArray[i].bookNumber, bookArray[i].bookPages);
    }

    printf("\n");

    free(bookArray);
    return 0;

}

/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/