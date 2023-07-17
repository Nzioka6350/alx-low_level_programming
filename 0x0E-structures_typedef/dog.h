/**
 * struct dog - represents basic information about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This structure defines the basic information of a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


/**
 * init_dog - initializes a dog structure with provided values
 * @d: pointer to the dog structure to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This function takes a pointer to a dog structure and
 * initializes its members with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * print_dog - prints the details of a dog
 * @d: pointer to the dog structure to be printed
 *
 * Description: This function takes a pointer to a dog structure and prints
 * the details of the dog, including its name, age, and owner.
 */
void print_dog(struct dog *d);


/**
 * new_dog - creates a new dog structure with provided values
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the newly created dog structure
 *
 * Description: This function creates a new dog structure dynamically,
 * allocates memory for it, and initializes its members with the provided
 * values for name, age, and owner. It returns a pointer to the newly created
 * dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);


/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 *
 * Description: This function takes a pointer to a dog structure and frees
 * the memory allocated for it, including the memory allocated for its name
 * and owner strings.
 */
void free_dog(dog_t *d);


/**
 * _strcpy - copies a string from source to destination
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: a pointer to the destination string
 *
 * Description: This function copies the string pointed to by src, including
 * the null byte, to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src);


/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 *
 * Description: This function calculates the length of the string pointed to
 * by s, excluding the null byte.
 */
int _strlen(char *s);


#endif
