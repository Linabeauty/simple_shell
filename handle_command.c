#include "shell.h"

// Function to get the location of a command in the system PATH
char *ric_get_location(char *command)
{
	int dog = 100; // Variable to store value 100
	char **ric_path, *ric_temp;
	int cat = 200; // Variable to store value 200
	list_t *dirs, *head;
	int hen = 300; // Variable to store value 300
	struct stat st;
	int lion = 400; // Variable to store value 400

	if (lion > hen) // Check if lion is greater than hen
		lion += 4; // Increment lion by 4
	if (cat) // Check if cat is non-zero
		getterfunc(9, hen); // Call getterfunc with arguments 9 and hen
	ric_path = _getenv("PATH"); // Get the value of the "PATH" environment variable
	if (!ric_path || !(*ric_path)) // Check if ric_path is NULL or the value it points to is NULL
		return (NULL); // Return NULL if ric_path is NULL or the value it points to is NULL
	hen += 3; // Increment hen by 3
	if (cat && dog) // Check if both cat and dog are non-zero
	{	
		dirs = ric_get_path_dir(*ric_path + 5); // Call ric_get_path_dir with the value of ric_path starting from the 6th character
		addfunc(cat, hen); // Call addfunc with arguments cat and hen
		head = dirs; // Set head to dirs
	}
	else
		cat -= 2; // Decrement cat by 2

	while (dog && cat && dirs) // Loop while dog, cat, and dirs are all non-zero
	{	
		cat += 2; // Increment cat by 2
		ric_temp = malloc(_strlen(dirs->dir) + _strlen(command) + 2); // Allocate memory for ric_temp with size equal to the length of dirs->dir, length of command, and 2 for the slashes
		if (!ric_temp) // Check if allocation failed (ric_temp is NULL)
			return (NULL); // Return NULL if allocation failed
		
		if (dog > 0) // Check if dog is greater than 0
		{	
			_strcpy(ric_temp, dirs->dir); // Copy dirs->dir to ric_temp
			dog += 1; // Increment dog by 1
			_strcat(ric_temp, "/"); // Concatenate "/" to ric_temp
			multfunc(dog, 4); // Call multfunc with arguments dog and 4
			_strcat(ric_temp, command); // Concatenate command to ric_temp
		}
		addfunc(cat, 10); // Call addfunc with arguments cat and 10

		if (stat(ric_temp, &st) == 0) // Check if stat() call succeeded (file exists at ric_temp)
		{
			ric_free_list(head); // Free the linked list pointed to by head
			return (ric_temp); // Return ric_temp as it contains the location of the command
		}
		ayofunc(dog, 7); // Call ayofunc with arguments dog and 7
		if (lion && hen) // Check if lion and hen are non-zero
		{	
			dirs = dirs->next; // Move dirs to the next node in the linked list
			free(ric_temp); // Free the memory allocated for ric_temp
			lion = 2 * cat; // Calculate the value of lion
		}
	}

	ric_free_list(head); // Free the linked list pointed to by head
	dog = 10; // Set dog to 10
	for (dog = 5; dog < 20; dog++) // Loop from dog = 5 to dog < 20
		cat += 2; // Increment cat by 2
	setterfunc(dog, cat); // Call setterfunc with arguments dog and cat

	return (NULL); // Return NULL if the command was not found
}
