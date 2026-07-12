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

void choice() {
    printf("#For strings enter b for two c for three quotes.\n");
    printf("#Enter cl for classes. Enter i for if statements. Enter e for elif.\n");
    printf("#Enter v for variables and user input option.\n");
    printf("#Enter ch for choices.\n");
    printf("#Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("#Enter m to go to main menu to select another choice.\n");
}

void string() {
    char string[2][15] = {"print(\"", "\")"};
    char text[SIZE];
    printf("#Enter your string, m for main.\n");
    while (1) {
        printf("#");
        while(fgets(text, SIZE, stdin) ==NULL) {
            checkInput();
        }
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", string[0], text, string[1]);
    }
}

void stringTriple() {
    char string[2][15] = {"print('''", "''')"};
    char text[SIZE];
    printf("#Enter your string, m for main.\n");
    while (1) {
        printf("#");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }  
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", string[0], text, string[1]);
    }
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

void ifStatement() {
    char f[6][12] = {"if ", " == ", ":", "    print(\"", "\")","\""};
    char text[SIZE];
    char te[SIZE];
    char quotes[SIZE];
    char ts[SIZE];
    char t[SIZE];
    while (1) {
        printf("#Enter name of if statement, m for main. ");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }  
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("#Enter a value. ");
        while(fgets(te, SIZE, stdin) == NULL) {
            checkInput();
        }  
        te[strcspn(te, "\n")] = 0;
        if(strlen(te) >= MAX) {
            clean();
        }
        printf("#Press s if the value is a string press enter if not.\n");
        while(fgets(quotes,SIZE,stdin) == NULL) {
            checkInput();
        }  
        quotes[strcspn(quotes,"\n")]=0;
        if(strlen(quotes) >= MAX) {
            clean();
        }
        printf("#Enter s to make the next line a string with print function. Enter for other. ");
        while(fgets(ts, SIZE, stdin) == NULL) {
            checkInput();
        }  
        ts[strcspn(ts, "\n")] = 0;
        if(strlen(ts) >= MAX) {
            clean();
        }
        printf("#Enter the second line. ");
        while(fgets(t, SIZE, stdin) == NULL) {
            checkInput();
        }  
        t[strcspn(t, "\n")] = 0;
        if(strlen(t) >= MAX) {
            clean();
        }
        if (strcmp(quotes, "s")!= 0) {
            printf("\n%s%s%s%s%s\n", f[0], text, f[1], te, f[2]);
        }else if (strcmp(quotes,"s")==0){
            printf("\n%s%s%s%s%s%s%s\n", f[0], text, f[1], f[5],te,f[5], f[2]);
        }
        if (strcmp(ts, "s") == 0) {
            printf("%s%s%s\n\n", f[3], t, f[4]);
        } else {
            printf("    %s\n\n", t);
        }
    }
}

void elIf () {
    char f[6][12] = {"elif ", " == ", ":", "    print(\"", "\")","\""};
    char text[SIZE];
    char te[SIZE];
    char quotes[SIZE];
    char ts[SIZE];
    char t[SIZE];
    while (1) {
        printf("#Enter name of elif statement, m for main. ");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }  
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("#Enter a value. ");
        while(fgets(te, SIZE, stdin) == NULL) {
            checkInput();
        }  
        te[strcspn(te, "\n")] = 0;
        if(strlen(te) >= MAX) {
            clean();
        }
        printf("#Press s if the value is a string press enter if not.\n");
        while(fgets(quotes,SIZE,stdin) == NULL) {
            checkInput();
        }  
        quotes[strcspn(quotes,"\n")]=0;
        if(strlen(quotes) >= MAX) {
            clean();
        }
        printf("#Enter s to make the next line a string with print function. Enter for other. ");
        while(fgets(ts, SIZE, stdin) == NULL) {
            checkInput();
        }  
        ts[strcspn(ts, "\n")] = 0;
        if(strlen(ts) >= MAX) {
            clean();
        }
        printf("#Enter the second line. ");
        while(fgets(t, SIZE, stdin) == NULL) {
            checkInput();
        }     
        t[strcspn(t, "\n")] = 0;
        if(strlen(t) >= MAX) {
            clean();
        }
        if (strcmp(quotes,"s")!= 0) {
            printf("\n%s%s%s%s%s\n", f[0], text, f[1], te, f[2]);
        } else if (strcmp(quotes,"s")==0) {
            printf("\n%s%s%s%s%s%s%s\n", f[0], text, f[1], f[5],te,f[5], f[2]);
        }   
        if (strcmp(ts, "s") == 0) {
            printf("%s%s%s\n\n", f[3], t, f[4]);
        } else {
            printf("    %s\n\n", t);
        }
    }
}

void variable() {
    char f[4][12] = {" = ", "\"", "input(\"", " \")"};
    char n[SIZE];
    char vs[SIZE];
    char v[SIZE];

    while (1) {
        printf("#Enter a name for your variable, m for main.\n");
        printf("#");
        while(fgets(n, SIZE, stdin) == NULL) {
            checkInput();
        }  
        n[strcspn(n, "\n")] = 0;
        if(strlen(n) >= MAX) {
            clean();
        }
        if (strcmp(n, "m") == 0) {
            break;
        }
        printf("#If the value is a string enter s. Enter  i for user input otherwise enter.\n");
        printf("#");
        while(fgets(vs, SIZE, stdin) == NULL) {
            checkInput();
        }  
        vs[strcspn(vs, "\n")] = 0;
        if(strlen(vs) >= MAX) {
            clean();
        }
        printf("#Enter a value. ");
        while(fgets(v, SIZE, stdin) == NULL) {
            checkInput();
        }  
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= MAX) {
            clean();
        }
        if (strcmp(vs, "s") == 0) {
            printf("\n%s%s%s%s%s\n\n", n, f[0], f[1], v, f[1]);
        } else if (strcmp(vs, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", n, f[0], f[2], v, f[3]);
        } else {
            printf("\n%s%s%s\n\n", n, f[0], v);
        }
    }
}

void copy() {
    char cpy[5];
    while (1) {
        printf("\nwhile True:\n");
        printf("\nbreak\n");
        printf("\ncontinue\n\n");
        printf("\nelse:\n\n");
        printf("#Enter m for main.\n");
        fgets(cpy, 5, stdin);
        cpy[strcspn(cpy, "\n")] = 0;
        if (strcmp(cpy, "m") == 0) {
            break;
        }
    }
}

struct Menu {
    const char* keys;
    void(*values)(void);
};

int main() {

    struct Menu m1[] = {
        {"ch",             choice},
        {"b",              string},
        {"c",        stringTriple},
        {"cl",            classes},
        {"i",         ifStatement},
        {"e",                elIf},
        {"v",            variable}, 
        {"cy",               copy},
    };

    char sw[SIZE];

    printf("\n          copyright 2023-2026 Mitchell E Wise\n");
    printf("          SPDX-License-Identifier: Apache-20\n\n\n");

    printf("//Enter r to repeat choices enter to not.\n");
    while(fgets(repeat,SIZE, stdin) == NULL) {
        checkInput();
    }
    repeat[strcspn(repeat, "\n")] = 0;
    if (strlen(repeat) >= MAX) {
        clean();
    }
    choice();
    while (1) {
        printf("//Enter a selection from choices x to exit ch for choices.\n");
        printf("//");
        while(fgets(sw,SIZE, stdin) == NULL) {
            checkInput();
        }
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= MAX) {
            clean();
        }
        if(strcmp(sw,"x")==0){
            break;
        }
        int index = -1;
        for(int i = 0; i<8;i++) {
            if(strcmp(sw, m1[i].keys)==0){
                index = i;
            }
        }
        if(index == -1) {
            printf("\n//Enter a name in choices.\n\n");
            continue;
        }
        m1[index].values();
    }
    return 0;
}

