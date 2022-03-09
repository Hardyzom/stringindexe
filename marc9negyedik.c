#include <stdio.h>
#include "prog1.h"
#include <string.h>

int find_char(string szoveg, char c){

    int hossz=strlen(szoveg);
    for(int i=0; i<hossz; i++){
        if(szoveg[i] == c){
            return i;
        }
    }
    return -1;

}




int main(){
string szoveg ="Almafa";
char c = 'l';
printf("Az 'l' karakter indexe az almafa szoban: %d\n", find_char(szoveg,c));
return 0;

}