#include <iostream>
#include "header.h"

using namespace std;

void List::Animal::setName(string animal)
{
	this->animal = animal;
}

string List::Animal::getName()
{
	return this->animal;
}

void List::Animal::setAge(int age)
{
	this->age = age;
}

int List::Animal::getAge()
{
	return this->age;
}

void List::Animal::setWeight(int weight)
{
	this->weight = weight;
}

int List::Animal::getWeight()
{
	return this->weight;
}

void List::Animal::setNext(Animal* next)
{
	this->next = next;
}

List::Animal* List::Animal::getNext() 
{
	return this->next;
}

void List::setHead(Animal* head)
{
	this->head = head;
}

List::Animal* List::getHead()
{
	return this->head;
}

bool List::Empty()
{ 
	if (head == NULL)
		return true;
	return false;
}

void List::Add(string animal, int age, int weight)
{
	Animal* name = new Animal;
	name->setNext(getHead());
	head = name;
	head->setName(animal);
	head->setAge(age);
	head->setWeight(weight);
}

void List::Print()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	if (!Empty())
	{
		List::Animal* current = head;
		while (current != NULL)
		{
			cout << current->getName() << " " << current->getAge() << " " << current->getWeight() << endl;
			current = current->getNext();
		}
	}
	else
		cout << "Пусто!\n";
}
