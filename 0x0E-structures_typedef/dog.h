#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t -  new name for the type struct dog
 */
typedef struct dog dog_t;


/**
 * struct dog - struct that store information about a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
