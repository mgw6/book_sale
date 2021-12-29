// MacGregor Winegard
// CSCI 303 Homework 2
// Date: 10/3/2021

#include <stdio.h>
#include <malloc.h>
#include <string.h>

void print_menu();

int main(int argc, char *argv[])
{
	printf("Welcome to the bookstore!\n");

	int max_books = 10;
	int max_title_len = 100;
	int books_entered = 0;
	int menu_choice;
	double total_price;
	int i;
	float price [max_books];
	char **book_titles;
	book_titles = malloc(max_books * sizeof(char*));


	print_menu();

	while(1) {
		printf("\nChoice: ");
		fscanf(stdin, "%d", &menu_choice);
		getchar();


		if (menu_choice == 1){ // Add book

			book_titles[books_entered] = malloc(max_title_len * sizeof(char));

			printf("Enter book title: ");
			fgets(book_titles[books_entered], max_title_len-1, stdin);
			book_titles[books_entered][strlen(book_titles[books_entered]) - 1] = '\0';

			printf("Enter book price: $");
			fscanf(stdin, "%f", &price[books_entered]);

			books_entered++;

		} else if (menu_choice == 2) { //

			printf("\nListing books: \n");
			for (i=0; i<books_entered; i++)
				printf("\tTitle: %s || Price: $%.2f\n", book_titles[i], price[i]);

		} else if (menu_choice == 3) { // total price
			total_price = 0;
			for (i=0; i<books_entered; i++)
				total_price = total_price + price[i];

			printf("Total Price of inventory: $%.2f\n", total_price);

		} else if (menu_choice == 4) { //calc inventory value
			break;
		} else {
			printf("Not an option.\n");
		}

	}

	printf("Goodbye!\n");
}



void print_menu()
{
	printf("Enter the number of your choice:\n");
	printf("\t1) Enter book\n");
	printf("\t2) List inventory\n");
	printf("\t3) Total value of inentory\n");
	printf("\t4) Quit \n\n");
}

/*
Did you hear about the monkeys that shared an Amazon account?

They were prime mates.
*/
