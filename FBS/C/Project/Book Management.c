#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
};

struct Book books[MAX];
int bookCount = 0;

// Function Prototypes
void addBook();
void removeBook();
void searchBook();
void searchByAuthor();
void searchByCategory();
void updateBook();
void displaySortedBooks();
void displayAllBooks();

int main() {
    int choice;
    do {
        printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n2. Remove Book\n3. Search Book\n4. Show Author's Books\n");
        printf("5. Show Category's Books\n6. Update Book\n7. Display Sorted Books\n8. Display All Books\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline character

        switch(choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBook(); break;
            case 4: searchByAuthor(); break;
            case 5: searchByCategory(); break;
            case 6: updateBook(); break;
            case 7: displaySortedBooks(); break;
            case 8: displayAllBooks(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 9);
    return 0;
}

// Function to Add Book
void addBook() {
    if(bookCount >= MAX) {
        printf("Book storage is full.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[bookCount].id);
    getchar();
    printf("Enter Book Name: ");
    gets(books[bookCount].name);
    printf("Enter Author Name: ");
    gets(books[bookCount].author);
    printf("Enter Category: ");
    gets(books[bookCount].category);
    printf("Enter Price: ");
    scanf("%f", &books[bookCount].price);
    printf("Enter Rating: ");
    scanf("%f", &books[bookCount].rating);

    bookCount++;
    printf("Book added successfully.\n");
}

// Function to Remove Book by ID
void removeBook() {
    int id, found = 0;
    int i, j;

    printf("Enter Book ID to remove: ");
    scanf("%d", &id);

    for(i = 0; i < bookCount; i++) {
        if(books[i].id == id) {
            found = 1;
            for(j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book removed successfully.\n");
            break;
        }
    }

    if(!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// Function to Search Book by ID or Name
void searchBook() {
    int choice, id, found = 0;
    char name[50];
    int i;

    printf("Search by: 1. ID 2. Name : ");
    scanf("%d", &choice);
    getchar();

    if(choice == 1) {
        printf("Enter Book ID: ");
        scanf("%d", &id);

        for(i = 0; i < bookCount; i++) {
            if(books[i].id == id) {
                printf("\nBook Found:\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
                    books[i].id, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
                found = 1;
                break;
            }
        }
    } else if(choice == 2) {
        printf("Enter Book Name: ");
        gets(name);

        for(i = 0; i < bookCount; i++) {
            if(strcasecmp(books[i].name, name) == 0) {
                printf("\nBook Found:\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
                    books[i].id, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
                found = 1;
                break;
            }
        }
    } else {
        printf("Invalid choice.\n");
        return;
    }

    if(!found) {
        printf("Book not found.\n");
    }
}

// Function to Search Books by Author
void searchByAuthor() {
    char author[50];
    int found = 0;
    int i;

    printf("Enter Author Name: ");
    gets(author);

    for(i = 0; i < bookCount; i++) {
        if(strcasecmp(books[i].author, author) == 0) {
            printf("\nID: %d | Name: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                books[i].id, books[i].name, books[i].category, books[i].price, books[i].rating);
            found = 1;
        }
    }

    if(!found) {
        printf("No books found by author %s.\n", author);
    }
}

// Function to Search Books by Category
void searchByCategory() {
    char category[30];
    int found = 0;
    int i;

    printf("Enter Category Name: ");
    gets(category);

    for(i = 0; i < bookCount; i++) {
        if(strcasecmp(books[i].category, category) == 0) {
            printf("\nID: %d | Name: %s | Author: %s | Price: %.2f | Rating: %.1f\n",
                books[i].id, books[i].name, books[i].author, books[i].price, books[i].rating);
            found = 1;
        }
    }

    if(!found) {
        printf("No books found in category %s.\n", category);
    }
}

// Function to Update Book's Price and Rating
void updateBook() {
    int id, found = 0;
    int i;

    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < bookCount; i++) {
        if(books[i].id == id) {
            printf("Enter New Price: ");
            scanf("%f", &books[i].price);
            printf("Enter New Rating: ");
            scanf("%f", &books[i].rating);
            printf("Book updated successfully.\n");
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// Function to Display Top 3 Books Sorted by Price and Rating
void displaySortedBooks() {
    struct Book sorted[MAX];
    int i, j, n = bookCount;

    // Copy original array to sorted array
    for(i = 0; i < n; i++) {
        sorted[i] = books[i];
    }

    // Sort by Price and Rating (Descending)
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(sorted[j].price > sorted[i].price || 
              (sorted[j].price == sorted[i].price && sorted[j].rating > sorted[i].rating)) {
                struct Book temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    printf("\n--- Top 3 Books ---\n");
    for(i = 0; i < n && i < 3; i++) {
        printf("ID: %d | Name: %s | Author: %s | Price: %.2f | Rating: %.1f\n",
            sorted[i].id, sorted[i].name, sorted[i].author, sorted[i].price, sorted[i].rating);
    }
}

// Function to Display All Books
void displayAllBooks() {
    int i;
    if(bookCount == 0) {
        printf("No books in the database.\n");
        return;
    }

    printf("\n--- All Books ---\n");
    for(i = 0; i < bookCount; i++) {
        printf("ID: %d | Name: %s | Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
            books[i].id, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
    }
}

