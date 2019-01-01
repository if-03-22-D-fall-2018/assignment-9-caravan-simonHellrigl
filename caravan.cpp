/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include <stdlib.h>

#include "caravan.h"
struct Node{
    PackAnimal animal;
    struct Node *next;
};

struct CaravanImplementation{
    int length;
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
};
Caravan c = (Caravan)malloc(sizeof(Caravan));

Caravan new_caravan()
{
  c->head->animal = 0;
  c->head -> next = 0;
  c -> length = 0;
  return c;

}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan){

}
