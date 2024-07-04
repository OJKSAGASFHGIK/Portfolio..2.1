#include <stdio.h>
#include <ctype.h>

int main(){
    // toupper() tolower()
    /* if you want change a word, it's more bureaucratic in C */
    char a1lower = 'l';
    char a1upper = toupper(a1lower);
    char a2lower = tolower(a1upper);
    printf("char v2 = toupper(v1); // %c\n", a1upper);
    printf("char v2 = tolower(v1); // %c\n", a2lower);

    // // a2
    return 0; }