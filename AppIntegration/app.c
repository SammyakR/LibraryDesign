#include "dll.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct person_{
    char name[32];
    int age;
    int weight;
}person_t;

static void print_person_details(person_t *person){
    printf("Name = %s\n", person->name);
    printf("Age = %d\n", person->age);
    printf("Weight = %d\n", person->weight);
}

static void print_person_db(dll_t *person_db){
    if(!person_db || !person_db->head) return;

    dll_node_t *head = person_db->head;
    person_t *data = NULL;

    while(head){
        data = head->data;
        print_person_details(data);
        head = head->right;
    }
}

int main(int argc, char **argv){
    person_t *person1 = calloc(1, sizeof(person_t));
    strncpy(person1->name, "AAAAA", strlen("AAAAA"));
    person1->age = 31;
    person1->weight = 75;

    person_t *person2 = calloc(1, sizeof(person_t));
    strncpy(person2->name, "BBBBB", strlen("AAAAA"));
    person2->age = 31;
    person2->weight = 75;

    person_t *person3 = calloc(1, sizeof(person_t));
    strncpy(person3->name, "CCCCC", strlen("AAAAA"));
    person3->age = 31;
    person3->weight = 75;

    dll_t *person_db = get_new_dll();
    add_data_to_dll(person_db, person1);
    add_data_to_dll(person_db, person2);
    add_data_to_dll(person_db, person3);

    print_person_db(person_db);

    return 0;
}