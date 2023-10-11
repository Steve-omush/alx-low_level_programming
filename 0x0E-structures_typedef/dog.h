#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog values.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Attributes of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
