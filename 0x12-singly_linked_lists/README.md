0x12. C - Singly linked lists
We are required to use this data structure for this project:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
Tasks
0. Print list - prints contents of a linked list
1. List length - returns the number of elements in a linked list_t list
2. Add node - adds a new node at the beginning of a list_t list
3. Add node at the end - adds a new node at the end of a list_t list.
4. Free list -  frees a list_t list.
5. The Hare and the Tortoise - prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed
 6. Real programmers can write assembly code in any language - 64-bit program in assembly that prints Hello, Holberton, followed by a new line. 
