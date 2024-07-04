#include <stdio.h>
#include <string.h>

struct Player{
    char name[12]; // the number inside is size
    int score;
};

int main(){ 
    struct Player player1;
    strcpy(player1.name, "Mike");
    player1.score = 3;

    struct Player player2;
    strcpy(player2.name, "Greque");
    player2.score = 9;

    printf("%s: score = ", player1.name); // %s for string
    printf("%d\n", player1.score); // %d for numbers?
    
    printf("%s: score = ", player2.name);
    printf("%d\n", player2.score);

    return 0; }