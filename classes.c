//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
int main(){

     char f  [9] [24] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     char text  [2000];
     char te [2000];
     char v [2000]; char v1 [2000]; char v2 [2000]; char v3 [2000]; char v4[2000]; char v5[2000]; char v6 [2000]; char v7 [2000];

 while (1){
 printf("#Enter a class x to exit. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"x")==0){
 break;}
 printf("#List attributes with a comma separating each one, x to exit.\n");
 printf("#");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Assign values. Press enter after each one.\n");
 printf("#");
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 printf("#");
 fgets(v1,2000,stdin);
 v1[strcspn(v1,"\n")]=0;
 printf("#");
 fgets(v2,2000,stdin);
 v2[strcspn(v2,"\n")]=0;
 printf("#");
 fgets(v3,2000,stdin);
 v3[strcspn(v3,"\n")]=0;
 printf("#");
 fgets(v4,2000,stdin);
 v4[strcspn(v4,"\n")]=0;
 printf("#");
 fgets(v5,2000,stdin);
 v5[strcspn(v5,"\n")]=0;
 printf("#");
 fgets(v6,2000,stdin);
 v6[strcspn(v6,"\n")]=0;
 printf("#");
 fgets(v7,2000,stdin);
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
 return 0;
}














