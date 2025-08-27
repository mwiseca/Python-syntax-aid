// Copyright 2023 2024 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#define SIZE 2000

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin);
}

void choice() {
    printf("#For strings enter a for one b for two c for three quotes. Enter x to exit.\n");
    printf("#Enter cl for classes. Enter i for if statements. Enter e for elif.\n");
    printf("#Enter v for variables and user input option.\n");
    printf("#Enter ch for choices.\n");
    printf("#Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("#Enter m to go to main menu to select another choice.\n");
}

int main() {

    char sw[SIZE];
    choice();
    while (1) {
        printf("#Enter m for main x to exit ch for choices.\n");
        printf("#");
        while(fgets(sw, SIZE, stdin) ==NULL) {
            checkInput(); 
        }
        sw[strcspn(sw, "\n")] = 0;
        if (strcmp(sw, "a") == 0) {
            char string[2][15] = {"print('", "')"};
            char text[SIZE];
            printf("#Enter your string, m for main.\n");
            while (1) {
                printf("#");
                while(fgets(text, SIZE, stdin) == NULL) {
                    checkInput(); 
                }     
                text[strcspn(textSIZE, "\n")] = 0;
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s\n\n", string[0], text, string[1]);
            }
        } else if (strcmp(sw, "b") == 0) {
            char string[2][15] = {"print(\"", "\")"};
            char text[SIZE];
            printf("#Enter your string, m for main.\n");
            while (1) {
                printf("#");
                while(fgets(text, SIZE, stdin) ==NULL) {
                    checkInput(); 
                } 
                text[strcspn(text, "\n")] = 0;
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s\n\n", string[0], text, string[1]);
            }
        } else if (strcmp(sw, "c") == 0) {
            char string[2][15] = {"print('''", "''')"};
            char text[SIZE];
            printf("#Enter your string, m for main.\n");
            while (1) {
                printf("#");
                while(fgets(text, SIZE, stdin) == NULL) {
                         checkInput();
                }  
                text[strcspn(text, "\n")] = 0;
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s\n\n", string[0], text, string[1]);
            }
        } else if (strcmp(sw, "x") == 0) {
            break;
        } else if (strcmp(sw, "cl") == 0) {
            char f[9][24] = {"class ", ":", "    def __init__(self,", "):", "self.", "=", " ", "        "};
            char text[SIZE];
            char te[SIZE];
            char v[SIZE];
            char v1[SIZE];
            char v2[SIZE];
            char v3[SIZE];
            char v4[SIZE];
            char v5[SIZE];
            char v6[SIZE];
            char v7[SIZE];

            while (1) {
                printf("#Enter a class, m for main. ");
                while(fgets(text, SIZE, stdin) == NULL) {
                      checkInput();
                }    
                text[strcspn(text, "\n")] = 0;
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("#List attributes with a comma separating each one.\n");
                printf("#");
                while(fgets(te, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                te[strcspn(te, "\n")] = 0;
                printf("#Assign values. Press enter after each one.\n");
                printf("#");
                while(fgets(v, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v[strcspn(v, "\n")] = 0;
                printf("#");
                while(fgets(v1, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v1[strcspn(v1, "\n")] = 0;
                printf("#");
                while(fgets(v2, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v2[strcspn(v2, "\n")] = 0;
                printf("#");
                while(fgets(v3, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v3[strcspn(v3, "\n")] = 0;
                printf("#");
                while(fgets(v4, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v4[strcspn(v4, "\n")] = 0;
                printf("#");
                while(fgets(v5, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v5[strcspn(v5, "\n")] = 0;
                printf("#");
                while(fgets(v6, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v6[strcspn(v6, "\n")] = 0;
                printf("#");
                while(fgets(v7, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                v7[strcspn(v7, "\n")] = 0;
                printf("\n%s%s%s\n", f[0], text, f[1]);
                printf("%s%s%s\n", f[2], te, f[3]);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v, f[6], f[5], f[6], v);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v1, f[6], f[5], f[6], v1);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v2, f[6], f[5], f[6], v2);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v3, f[6], f[5], f[6], v3);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v4, f[6], f[5], f[6], v4);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v5, f[6], f[5], f[6], v5);
                printf("%s%s%s%s%s%s%s\n", f[7], f[4], v6, f[6], f[5], f[6], v6);
                printf("%s%s%s%s%s%s%s\n\n", f[7], f[4], v7, f[6], f[5], f[6], v7);
            }
        } else if (strcmp(sw, "i") == 0) {
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
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("#Enter a value. ");
                while(fgets(te, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                te[strcspn(te, "\n")] = 0;
                printf("#Press s if the value is a string press enter if not.\n");
                while(fgets(quotes,2000,stdin) == NULL) {
                    checkInput();
                }  
                quotes[strcspn(quotes,"\n")]=0;
                printf("#Enter s to make the next line a string with print function. Enter for other. ");
                while(fgets(ts, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                ts[strcspn(ts, "\n")] = 0;
                printf("#Enter the second line. ");
                while(fgets(t, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                t[strcspn(t, "\n")] = 0;
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
        } else if (strcmp(sw, "e") == 0) {
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
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("#Enter a value. ");
                while(fgets(te, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                te[strcspn(te, "\n")] = 0;
                printf("#Press s if the value is a string press enter if not.\n");
                while(fgets(quotes,SIZE,stdin) == NULL) {
                    checkInput();
                }  
                quotes[strcspn(quotes,"\n")]=0;
                printf("#Enter s to make the next line a string with print function. Enter for other. ");
                while(fgets(ts, SIZE, stdin) == NULL) {
                    checkInput();
                }  
                ts[strcspn(ts, "\n")] = 0;
                printf("#Enter the second line. ");
                while(fgets(t, SIZE, stdin) == NULL) {
                t[strcspn(t, "\n")] = 0;
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
        } else if (strcmp(sw, "v") == 0) {
            char f[4][12] = {" = ", "\"", "input(\"", " \")"};
            char n[SIZE];
            char vs[SIZE];
            char v[SIZE];

            while (1) {
                printf("#Enter a name for your variable, m for main.\n");
                printf("#");
                while(fgets(n, SIZE, stdin) == NULL) {
                n[strcspn(n, "\n")] = 0;
                if (strcmp(n, "m") == 0) {
                    break;
                }
                printf("#If the value is a string enter s. Enter  i for user input otherwise enter.\n");
                printf("#");
                while(fgets(vs, 2000, stdin) == NULL) {
                    checkInput();
                }  
                vs[strcspn(vs, "\n")] = 0;
                printf("#Enter a value. ");
                while(fgets(v, 2000, stdin) == NULL) {
                    checkInput();
                }  
                v[strcspn(v, "\n")] = 0;
                if (strcmp(vs, "s") == 0) {
                    printf("\n%s%s%s%s%s\n\n", n, f[0], f[1], v, f[1]);
                } else if (strcmp(vs, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", n, f[0], f[2], v, f[3]);
                } else {
                    printf("\n%s%s%s\n\n", n, f[0], v);
                }
            }
        } else if (strcmp(sw, "cy") == 0) {
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
        } else if (strcmp(sw, "ch") == 0) {
            choice();
        } else {
            printf("Enter a letter in choices.\n");
        }
    }
    return 0;
}

