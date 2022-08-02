#include <stdio.h>

int main(void)
{
	struct dog
	{
		char *name;
		float age;
	};
	struct dog new_dog;
	char *s = "poppy";
	new_dog.name = s;
	printf("new dog's name is %s\n", new_dog.name);
	return (0);
}
