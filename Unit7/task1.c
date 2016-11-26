#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0


int deleteContact()
{
	FILE *fp;
	FILE *sfp;
	char enteredFirstName[30];
	char enteredLastName[30];
	char firstName[30];
	char lastName[30];
	char phone[30];
	char semicolon[2];
	int contact_exists = FALSE;
	char copyContent;

	printf("\nEnter the exact name of the contact to delete it: ");
	scanf("%s %s", enteredFirstName, enteredLastName);

	fp = fopen("phonebook.txt", "r");
	sfp = fopen("phonebook_copy.txt", "w+");

	if(NULL == fp || NULL == sfp)
	{
		perror("Error: The file could not open...");
		return -1;
	}

	while(TRUE)
	{	
		fscanf(fp, "%s %s %s %s", firstName, lastName, semicolon, phone);

		if(feof(fp))
		{	
			if(FALSE == contact_exists)
			{
				printf("\nThe contact doesn't exists in the phonebook...\n\n");
			} 
			break;
		}

		if(0 == strcmp(firstName, enteredFirstName) && 0 == strcmp(lastName, enteredLastName))
		{
			 if(FALSE == contact_exists)
			 {
			 	printf("\nDeleted records: \n\n");
			 	contact_exists = TRUE;
			 }
			 printf("%s %s %s %s\n", firstName, lastName, semicolon, phone);
			 continue;
		}

		if(0 != strcmp(firstName, enteredFirstName) || 0 != strcmp(lastName, enteredLastName))
		{
			fprintf(sfp, "%s %s %s %s\n", firstName, lastName, semicolon, phone);
			continue;
		} 
	}

	fclose(fp);

	if(TRUE == contact_exists)
	{
		fp = fopen("phonebook.txt", "w+");
		fseek(sfp, 0, SEEK_SET);
		if(NULL == fp)
		{
			perror("Error: The file could not open...");
			return -1;
		}
		while(TRUE)
		{
			fscanf(sfp, "%s %s %s %s", firstName, lastName, semicolon, phone);
			if(feof(sfp))
			{	
				break;
			}
			fprintf(fp, "%s %s %s %s\n", firstName, lastName, semicolon, phone);
		}
   		fclose(fp);
	}
	fclose(sfp);
}

int searchContact()
{
	FILE *fp;
	char enteredFirstName[30];
	char enteredLastName[30];
	char firstName[30];
	char lastName[30];
	char phone[30];
	char semicolon[2];
	int contact_exists = FALSE;

	printf("\nEnter the exact name of the contact: ");
	scanf("%s %s", enteredFirstName, enteredLastName);

	fp = fopen("phonebook.txt", "r");
	if(NULL == fp)
	{
		perror("Error: The file could not open...");
		return -1;
	}

	while(TRUE)
	{	
		fscanf(fp, "%s %s %s %s", firstName, lastName, semicolon, phone);
		if(feof(fp))
		{	
			if(FALSE == contact_exists)
			{
				printf("\nThe contact doesn't exists in the phonebook...\n\n");
			}
			break;
		}

		if(0 == strcmp(firstName, enteredFirstName) && 0 == strcmp(lastName, enteredLastName))
		{
			if(FALSE == contact_exists)
			{
				printf("\nFound records: \n\n");
				contact_exists = TRUE;
			}
			printf("%s %s %s %s\n", firstName, lastName, semicolon, phone);
			continue;
		} 
	}

	fclose(fp);
}

int addEntry()
{
	FILE *fp;
	char firstName[30];
	char lastName[30];
	char phone[30];
	int operation_result;

	printf("\nYour first name: ");
	scanf("%s", firstName);
	printf("\nYour last name: ");
	scanf("%s", lastName);
	printf("\nYour phone number: ");
	scanf("%s", phone);

	fp = fopen("phonebook.txt", "a");
	if(NULL == fp)
	{
		perror("Error: The file could not open...");
		return -1;
	}
	
	operation_result = fprintf(fp, "%s %s ; %s\n", firstName, lastName, phone);
	if(operation_result > 0)
	{
		printf("\nThe contact was added successfully!\n");
	}
	fclose(fp);
}

void displayMenu()
{	
	int selected_choice;
	int selected_option = FALSE; 

	while(selected_option == FALSE)
	{
		printf("\n-----> Phonebook menu <-----\n\n");
		printf("----------------------------\n");
		printf("1. Add entry\n");
		printf("2. Search by name\n");
		printf("3. Delete entry\n");
		printf("4. Exit\n");
		printf("----------------------------\n\n");

		printf("Please enter your choice: ");
		scanf("%d", &selected_choice);

		switch(selected_choice)
		{
			case 1: 
				addEntry();
				break;
			case 2: 
				searchContact();
				break;
			case 3: 
				deleteContact();
				break;
			case 4: 
				selected_option = TRUE;
				break;
			default:
				printf("\nWrong option!\n");
				break;
		}
	}
}



int main() 
{
	displayMenu();
	return 0;
}