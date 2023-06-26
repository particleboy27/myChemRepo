#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct elements{
    const char* name_;
    const char* symbol_;
    int atomic_num;
    float atomic_weight;
    const char* class_;
    const char* group;
}elements;

int create_element(){
elements* element_x;
element_x = malloc(sizeof(elements));
if(element_x == NULL){
    printf("Memory Allocation Error!\n");
    return (-1);
}
char str[50];
int a_num;
float a_weight;
char sym_[4];

printf("Element name: ");
scanf("%s", str);
element_x->name_ = str;

printf("Atomic Number: ");
scanf("%d", &a_num);
element_x->atomic_num = a_num;

printf("Atomic Weight: ");
scanf("%f", &a_weight);
element_x->atomic_weight = a_weight;

printf("Symbol: ");
scanf("%s", sym_);
element_x->symbol_ = sym_;
printf("Here is your Element: %s\nSymbol: %s Atomic Number: %d\n", element_x->name_, element_x->symbol_, element_x->atomic_num);
free(element_x);
return 0;
}

void main(){
    create_element();
    
}