// For me to remember how is this program working
#include <stdio.h>
#include <string.h>
#define MAX_RECORDS 20
// this is defined globally because i don't want it to be changed and max number should always be 20

struct book
{
    int bookid;
    char book_name[64];
    char author[32];
    float price;
};

int main()
{
    int num_records = 0, book_id;
    struct book records[MAX_RECORDS];
    // here structure named records is created and array is passed to the structure with maximum record of 20.

    while (1)
    // this indicates infinite loop
    {
        int choice;
        printf("----------------------------------\n");
        printf("1) Input record\n");
        printf("2) Display records\n");
        printf("3) Search records by book id\n");
        printf("4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("---------------------------------\n");

        switch (choice)
        {
        case 1:
            // Input record
            if (num_records == MAX_RECORDS)
            // more than 20 can't be stored or there will be error
            {
                printf("Error: Maximum number of records reached\n");
                break;
            }
            printf("Enter book id: ");
            scanf("%d", &records[num_records].bookid);
            printf("Enter book name: ");
            scanf("%s", records[num_records].book_name);
            printf("Enter author name: ");
            scanf("%s", records[num_records].author);
            printf("Enter price: ");
            scanf("%f", &records[num_records].price);
            num_records++; // number of record is being counted
            printf("***DATA STORED***\n");
            break;
        case 2:
            // Display records
            for (int i = 0; i < num_records; i++)
            {
                printf("Book ID: %d\n", records[i].bookid);
                printf("Book name: %s\n", records[i].book_name);
                printf("Author: %s\n", records[i].author);
                printf("Price: %.2f\n", records[i].price);
                printf("\n");
            }
            break;
        case 3:
            // Search records by book id
            printf("Enter book id: ");
            scanf("%d", &book_id);
            for (int i = 0; i < num_records; i++)
            {
                if (records[i].bookid == book_id)
                {
                    printf("Book ID: %d\n", records[i].bookid);
                    printf("Book name: %s\n", records[i].book_name);
                    printf("Author: %s\n", records[i].author);
                    printf("Price: %.2f\n", records[i].price);
                    break;
                }
            }
            break;
        case 4:
            // Exit
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
