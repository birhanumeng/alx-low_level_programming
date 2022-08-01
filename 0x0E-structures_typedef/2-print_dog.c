#include <stdio.h>
#include "dog.h"

/**
  * print_dog - Prints all dog elements
  * @d: A dog structure
  *
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : "(nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
