#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * print_dog - This function prints struct dog
 *
 *
 **/
void print_dog(struct dog *d);
({
if (d == NULL)
;
else
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
=======
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to init
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
>>>>>>> c41a866ff40e64f5964b4a77a01e2e7d50881b20
}
