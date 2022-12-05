
#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

void maloced_and_destroyed_shower()
{
  const AAnimal* j = new Dog();
  const AAnimal* i = new Cat();
  delete j;
  delete i;
}

void dog_deep_copy_shower()
{
Dog firstdog;
Dog seconddog;

std::cout << std::endl << "**** PERFORMING DEEP COPY ****" << std::endl << std::endl;
firstdog.print_my_ideas();
firstdog = seconddog;
firstdog.print_my_ideas();
std::cout << std::endl << "**** END OF DEEP COPY ****" << std::endl << std::endl;
}

void cat_deep_copy_shower()
{
  Cat firstcat;
  Cat secondcat;

  std::cout << std::endl << "**** PERFORMING DEEP COPY ****" << std::endl << std::endl;
  firstcat.print_my_ideas();
  firstcat = secondcat;
  firstcat.print_my_ideas();
  std::cout << std::endl << "**** END OF DEEP COPY ****" << std::endl << std::endl;
}

int main()
{
    int animals_count = 2;
    const AAnimal *animals[animals_count];

    std::cout << std::endl << "**** CONSTRUCTORS ****" << std::endl << std::endl;
    for (int i = 0; i < animals_count; i++)
    {
        if (i < animals_count / 2)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
    }
    std::cout << std::endl << "**** DESTRUCTORS ****" << std::endl << std::endl;
    for (int i = 0; i < animals_count; i++)
        delete animals[i];
    cat_deep_copy_shower();
    dog_deep_copy_shower();
    maloced_and_destroyed_shower();
    return 0;
}