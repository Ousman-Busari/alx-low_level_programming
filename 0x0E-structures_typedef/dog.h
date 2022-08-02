#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a dog object
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: who owns the dog
 *
 * Description: defines a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* #ifndef DOG_H */
