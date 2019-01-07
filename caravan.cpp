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
#include <stdlib.h>

#include "caravan.h"
#include "general.h"

typedef struct NodeImplementation* Node;

struct NodeImplementation{

  PackAnimal animal;
  struct NodeImplementation* next;

};
struct CaravanImplementation{
    int length;
    Node head;

};


Caravan new_caravan()
{
  Caravan caravan = (Caravan) malloc(sizeof(struct CaravanImplementation));
  caravan->length = 0;
  caravan->head = 0;
  return caravan;
}

int get_length(Caravan caravan)
{
    return caravan->length;
}

void delete_caravan(Caravan caravan)
{
    Node current = caravan->head;
    while (current != 0)
    {
      Node temp = current;
      current = current->next;
      sfree(temp);
    }
    sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(animal != 0)
    {

        Node current = caravan->head;
        Node n_Animal = (Node)malloc(sizeof(struct NodeImplementation));
        n_Animal->animal = animal;
        n_Animal->next = 0;
        if(caravan->head == 0)
        {
            caravan->head = n_Animal;
        }
        else
        {
            while(current->next != 0)
            {              
                current = current->next;
            }
            if(current->animal == animal) return;
            current->next = n_Animal;
        }
        add_to_caravan(animal, caravan);
        caravan->length++;
    }

}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{

}

int get_caravan_load(Caravan caravan)
{
  int counter = 0;
  Node current = caravan->head;
  while (current != 0)
  {
    counter+=get_load(current->animal);
    current = current->next;
  }
  return counter;

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
