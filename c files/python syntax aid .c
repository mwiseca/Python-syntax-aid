//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>

void choice(){
printf("#Enter a for one b for two c for three quotes.  Enter x to exit.\n");
printf("#Enter cl for classes. Enter i for if statments. Enter e for elif.\n");
printf("#Enter ch for choices.\n");
printf("#Enter m to go to main menu to select another choice.\n");                                                   
}


int main(){

    char sw [250];
 choice();
 while (1){ 
 printf("#Enter m for main x to exit ch for choices.\n");
 printf("#");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
 if (strcmp(sw, "a")==0){
 char string  [2] [15] = {"print('",  "')"};
 char text [100];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,100,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("%s%s%s\n",string[0],text,string[1]);
 }
}else if (strcmp(sw, "b")==0){
 char string  [2] [15] = {"print(\"", "\")"};
 char text [100];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,100,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("%s%s%s\n",string[0],text,string[1]);
 }    
}else if (strcmp(sw, "c")==0){
  char string  [2] [15] = {"print('''",  "''')"};
 char text [100];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,100,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("%s%s%s\n",string[0],text,string[1]);
 }
}else if (strcmp(sw, "x")==0){
 break;
}else if (strcmp(sw, "cl")==0){
     char f  [9] [24] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     char text  [50];
     char te [500];
     char v [50]; char v1 [50]; char v2 [50]; char v3 [50]; char v4[50]; char v5[50]; char v6 [50]; char v7 [50];
	
 while (1){
 printf("#Enter a class m for main. ");
 fgets(text,50,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#List attributes with a comma separating each one.\n");
 printf("#");
 fgets(te,500,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Assign values. Press enter after each one.\n");
 printf("#");
 fgets(v,50,stdin);
 v[strcspn(v,"\n")]=0;
 printf("#");
 fgets(v1,50,stdin);
 v1[strcspn(v1,"\n")]=0;
 printf("#");
 fgets(v2,50,stdin);
 v2[strcspn(v2,"\n")]=0;
 printf("#");
 fgets(v3,50,stdin);
 v3[strcspn(v3,"\n")]=0;
 printf("#");
 fgets(v4,50,stdin);
 v4[strcspn(v4,"\n")]=0;
 printf("#");
 fgets(v5,50,stdin);
 v5[strcspn(v5,"\n")]=0;
 printf("#");
 fgets(v6,50,stdin);
 v6[strcspn(v6,"\n")]=0;
 printf("#");
 fgets(v7,50,stdin);
 v7[strcspn(v7,"\n")]=0;
 printf("%s%s%s\n",f[0],text,f[1]);
 printf("%s%s%s\n",f[2], te, f[3]);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v,f[6],f[5],f[6],v);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v1,f[6],f[5],f[6],v1);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v2,f[6],f[5],f[6],v2);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v3,f[6],f[5],f[6],v3);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v4,f[6],f[5],f[6],v4);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v5,f[6],f[5],f[6],v5);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v6,f[6],f[5],f[6],v6);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v7,f[6],f[5],f[6],v7);
 }
}else if (strcmp(sw, "i")==0){
char f [5] [12] = {"if ", " == ", ":","    print(\"", "\")"};
 char text [50];
 char te [50];
 char ts [50];
 char t [50];
 while (1){
 printf("#Enter name of if statment. ");
 fgets(text,50,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#Enter a value. Add quotes if its a string. ");
 fgets(te,50,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,50,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,50,stdin);
 t[strcspn(t,"\n")]=0;
 printf("%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n",f[3],t,f[4]);
}else{
      printf("    %s\n",t);
           }
      }
}else if (strcmp(sw, "e")==0){      
char f [5] [12] = {"elif ", " == ", ":","    print(\"", "\")"};
 char text [50];
 char te [50];
 char ts [50];
 char t [50];
 while (1){
 printf("#Enter name of elif statment. ");
 fgets(text,50,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#Enter a value. Add quotes if its a string. ");
 fgets(te,50,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,50,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,50,stdin);
 t[strcspn(t,"\n")]=0;
 printf("%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n",f[3],t,f[4]);
}else{
      printf("    %s\n",t);
           }
      } 
}else if (strcmp(sw, "v")==0){
    char f [4] [12] = {" = ","\"","input(\""," \")"};
    char n [50];
    char vs [100];
    char v [50];

 while (1){
 printf("#Enter a name for your variable.\n");
 printf("#");
 fgets(n,50,stdin);
 n[strcspn(n,"\n")]=0;
 if (strcmp(n, "m")==0){
 break;}
 printf("#If the value is a string enter s. Enter  i for user input otherwise enter.\n");
 printf("#");
 fgets(vs,100,stdin);
 vs[strcspn(vs,"\n")]=0;
 printf("#Enter a value. ");
 fgets(v,50,stdin);
 v[strcspn(v,"\n")]=0;
 if (strcmp(vs,"s")==0){
 printf("%s%s%s%s%s\n",n,f[0],f[1],v,f[1]);
}else if (strcmp(vs,"i")==0){
 printf("%s%s%s%s%s\n",n,f[0],f[2],v,f[3]);                                                   
}else{
     printf("%s%s%s\n",n,f[0],v);
           }
     }
}else if (strcmp(sw, "ch")==0){
 choice();
}else{
     printf("Enter a letter in choices.\n");
        }
    }
return 0;
}








     
      
      
      
      
      
      


 
 
 
 
 
 
 
 
 
      









	

                          	



































