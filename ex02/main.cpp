#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ANIMAL_ARRAY_SIZE 2

int main() {
	//Animal animal;

	std::cout << "---------------------------------------" << std::endl;
	{
		Dog test_dog_one;
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.AddIdea("Live");
		test_dog_one.AddIdea("Serve");
		Dog test_dog_two;
		test_dog_two.AddIdea("Relax");
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.PutIdeas();
		test_dog_two.PutIdeas();
		std::cout << "---------------------------------------" << std::endl;
		test_dog_two = test_dog_one;
		std::cout << "---------------------------------------" << std::endl;
		test_dog_one.PutIdeas();
		test_dog_two.PutIdeas();
		std::cout << "---------------------------------------" << std::endl;
	}
	{
		Cat test_cat_one;
		std::cout << "---------------------------------------" << std::endl;
		test_cat_one.AddIdea("Reap");
		test_cat_one.AddIdea("Tear");
		Cat test_cat_two;
		test_cat_two.AddIdea("Hate");
		std::cout << "---------------------------------------" << std::endl;
		test_cat_one.PutIdeas();
		test_cat_two.PutIdeas();
		std::cout << "---------------------------------------" << std::endl;
		test_cat_two = test_cat_one;
		std::cout << "---------------------------------------" << std::endl;
		test_cat_one.PutIdeas();
		test_cat_two.PutIdeas();
		std::cout << "---------------------------------------" << std::endl;
	}
}