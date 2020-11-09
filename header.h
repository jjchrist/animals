#pragma once
#include <string>
#include <windows.h>

using namespace std;

class List
{
	class Animal
	{
		int age;
		int weight;
		string animal;
		Animal* next;
	public:
		void setName(string animal);
		string getName();
		void setAge(int age);
		int getAge();
		void setWeight(int weight);
		int getWeight();
		void setNext(Animal* next);
		Animal* getNext();
	};
	
protected:
	Animal* head;
	void setHead(Animal* head);
	Animal* getHead();
public:
	List() 
	{
		head = NULL;
	}
	bool Empty();
	void Add(string animal, int age, int weight);
	//void Delete(string animal);
	void Print();
	//void Sort(int weight);
};
