// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
#define MAX 99

/*To use CONST int SIZE and const int MAX comment out the #define SIZE 
  and the #define MAX and uncomment the const int variables.*/

//const int SIZE = 100;
//const int MAX = 99;
char repeat[100];

void clean(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin);
}

void classes () {
    char f[9][24] = {"class ", ":", "    def __init__(self,", "):", "self.", "=", " ", "        "};
    char text[SIZE];
    char te[10][SIZE];
    char v [10][SIZE];
    int count = 0;
    int counts = 0;



    printf("#Enter a class, m for main. ");
    while(fgets(text, SIZE, stdin) == NULL) {
        checkInput();
    }    
    text[strcspn(text, "\n")] = 0;
    if(strlen(text) >= MAX) {
        clean();
    }
    if (strcmp(text, "m") == 0) {
        return;
    }
    while(count < 10) {
        printf("#List attributes one then press enter # to to finish.\n");
        printf("#");
        while(fgets(te[count],SIZE, stdin) == NULL) {
            checkInput();
        }  
        te[count][strcspn(te[count], "\n")] = 0;
        if(strlen(te[count]) == SIZE -1) {
            clean();
        }
        if(strcmp(te[count], "#")==0) {
            break;
        }else{
            count++;
        }
    }
    printf("\n%s%s%s\n", f[0], text, f[1]);
    printf("%s",f[2]);
    for(int i =0; i < count; i++) {
        printf("%s",te[i]);
        if(i < count -1) {
            printf(",");
        }
    }
    printf("%s",f[3]);
    printf("\n");
  
    for(int i =0; i < count; i++) {
        printf("%s%s%s%s%s%s%s\n", f[7], f[4], te[i], f[6], f[5], f[6], te[i]);         
    }
    printf("\n\n");
}             

int main() {
    classes();
}






