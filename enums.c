#include <stdio.h>

enum kids {
    habert,
    jeff,
    aria=3
};

int main () {
    //enums have fixed state of value
    //they have inbuilt constants known as integral constant = 0,1,2,3
    //integral constants can be changed
    //habert=10, jeff=9

    enum kids fistChild;
    fistChild = habert;

    enum kids secondBorn;
    secondBorn = jeff;

    enum kids lastBorn;
    lastBorn = aria;
    printf("%d and %d, %d", fistChild, secondBorn, lastBorn);

    return 0;
}