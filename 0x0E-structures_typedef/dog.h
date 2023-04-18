#ifndef DOG_H
#define DOH_H
/**
  * struct dog - information of the dog
  * @name: pointer to name of the dog
  * @age: pointer to how old is the dog
  * @owner: pointer to the person who owns the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_g - typedef of struct dog
  */
typedef struct dog dog_g;

void init_dog(struct dog *f, char *name, float age, char *owner);
void print dog(struct dog *f);
dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *f);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
