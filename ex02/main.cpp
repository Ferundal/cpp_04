#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ANIMAL_ARRAY_SIZE 2

int main() {
	{
		const Animal *array[ANIMAL_ARRAY_SIZE];

		for (int i = 0; i < ANIMAL_ARRAY_SIZE; ++i)
		{
			if (i < ANIMAL_ARRAY_SIZE / 2)
				array[i] = new Cat();
			else
				array[i] = new Dog();
		}
		for (int i = 0; i < ANIMAL_ARRAY_SIZE; ++i)
		{
			delete array[i];
		}
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		Dog test_dog_one;
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.AddDogIdea("Live");
		test_dog_one.AddDogIdea("Serve");
		Dog test_dog_two;
		test_dog_two.AddDogIdea("Relax");
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.PutDogIdeas();
		test_dog_two.PutDogIdeas();
		std::cout << "---------------------------------------" << std::endl;
		test_dog_two = test_dog_one;
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.PutDogIdeas();
		test_dog_two.PutDogIdeas();
		std::cout << "---------------------------------------" << std::endl;
	}
}