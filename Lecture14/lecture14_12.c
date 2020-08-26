#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct names
{
	char first[20];
	char last[20];
};

struct person
{
	int id;
	struct names name;			// nested structure member
};

struct person2
{
	int id;
	struct { char first[20]; char last[20]; };		// anonymous structure
};


int main()
{
	struct person ted = { 123, {"Bill", "Gates"} };
	struct person ted3 = { 125,{"Robert", "Hand"} };

	puts(ted.name.first);
	puts(ted3.name.first);

	struct person2 ted2 = { 124,{"Steve", "Wozniak"} };
	//struct person2 ted2 = { 124, "Steve", "Wozniak" };		// also works
	puts(ted2.first);

	return 0;
}