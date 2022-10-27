#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - define new struct
 *@name: name dog
 *@age: age dog
 *@owner: owner dog
 */
typedef struct dog
{
        *char name;
        float age;
        *char owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_0;
dog_0 *new_dog(char *name, float age, char *owner);
void free_dog(dog_0 *d);
#endif
