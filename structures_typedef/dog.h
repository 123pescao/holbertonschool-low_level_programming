#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
/**
 *struct dog- dog info
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: Always 0
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
