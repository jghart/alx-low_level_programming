#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - combines data items of different kinds
 * @name: name of character
 * @float: number of age
 * @owner: name of character
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
int _strlen(char *);
char *_memcpy(char *, char*, unsigned int);

#endif
