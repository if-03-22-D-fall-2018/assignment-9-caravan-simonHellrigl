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
#include "general.h"
struct CaravanImplementation{
    int length;
    PackAnimal animal;
    struct CaravanImplementation* next;
};

Caravan head = (Caravan)malloc(sizeof(struct CaravanImplementation));
Caravan c = (Caravan)malloc(sizeof(Caravan));

Caravan new_caravan()
{
  head->animal = 0;
  head -> next = 0;
  head -> length = 0;
  return head;

}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  Caravan currentCaravan = head;
  while (currentCaravan != 0)
  {
    if (caravan == head)
    {
      sfree(caravan);
    }
    else if (caravan == currentCaravan->next)
    {
      currentCaravan->next = caravan->next;
      sfree(caravan);
    }
    currentCaravan = currentCaravan->next;
  }
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (animal != 0 && get_caravan(animal) == 0)
  {
    caravan->animal = animal;
    caravan->length++;
    add_to_caravan(animal, caravan);
  }
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
