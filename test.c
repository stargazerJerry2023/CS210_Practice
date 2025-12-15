#include <stdio.h>
struct person {
    int age;
    int grad_year; 
    double height;
};

void age_up(struct person *p) {
    p->age ++;
    printf("New age: %d\n", p->age);
}

int main(void) {
    struct person gerardo = {40, 1999, 5.9};
    age_up(&gerardo);
    printf("Gerardo's age is now %d\n", gerardo.age);
    return 0;
}