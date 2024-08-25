//Copyright 2023 2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 

#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

void choice(){
using namespace std;
cout << "#For strings enter a for one b for two c for three quotes. Enter x to exit.\n";
cout << "#Enter cl for classes. Enter i for if statements. Enter e for elif.\n";
cout << "#Enter v for variables and user input option.\n";
cout << "#Enter ch for choices.\n";
cout << "#Enter cy for what's needed to copy and paste to finish a simple program.\n";
cout << "#Enter m to go to main menu to select another choice.\n";                                                   
}


int main(){

 std::string sw;
 choice();
 while(true){ 
 std::cout << "#Enter m for main x to exit ch for choices.\n";
 std::cout << "#";
 std::getline(std::cin,sw);
 if (sw == "a"){
 std::string t [2] = {"print('",  "')"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
 }
}else if(sw == "b"){
 std::string t [2] = {"print(\"", "\")"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" <<  t[0] << text << t[1] << "\n\n";
 }    
}else if(sw == "c"){
 std::string t [2] = {"print('''",  "''')"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);  
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
}
}else if(sw ==  "cl"){
     std::string f  [9] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     std::string text;
     std::string te;
     std::string v; std::string v1; std::string v2; std::string v3; std::string v4; std::string v5; std::string v6; std::string v7;

 while(true){
 std::cout << "#Enter a class, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#List attributes with a comma separating each one.\n";
 std::cout << "#";
 std::getline(std::cin,te);
 std::cout << "#Assign values. Press enter after each one.\n";
 std::cout << "#";
 std::getline(std::cin,v);
 std::cout << "#";
 std::getline(std::cin,v1);
 std::cout << "#";
 std::getline(std::cin,v2);
 std::cout << "#";
 std::getline(std::cin,v3);
 std::cout << "#";
 std::getline(std::cin,v4);
 std::cout << "#";
 std::getline(std::cin,v5);
 std::cout << "#";
 std::getline(std::cin,v6);
 std::cout << "#";
 std::getline(std::cin,v7);
 std::cout << "\n" << f[0] << text << f[1] << "\n";
 std::cout << f[2] <<  te <<  f[3] << "\n";
 std::cout << f[7] << f[4] << v << f[6] << f[5] << f[6] << v << "\n";
 std::cout << f[7] << f[4] << v1 << f[6] << f[5] << f[6] << v1 << "\n";
 std::cout << f[7] << f[4] << v2 << f[6] << f[5] << f[6] << v2 << "\n";
 std::cout << f[7] << f[4] << v3 << f[6] << f[5] << f[6] << v3 << "\n";
 std::cout << f[7] << f[4] << v4 << f[6] << f[5] << f[6] << v4 << "\n";
 std::cout << f[7] << f[4] << v5 << f[6] << f[5] << f[6] << v5 << "\n";
 std::cout << f[7] << f[4] << v6 << f[6] << f[5] << f[6] << v6 << "\n";
 std::cout << f[7] << f[4] << v7 << f[6] << f[5] << f[6] << v7 << "\n\n";
     }
 }else if(sw == "i"){
 std::string f [5]  = {"if ", " == ", ":","    print(\"", "\")"};
 std::string text;
 std::string te;
 std::string ts;
 std::string t;
 while (true){
 std::cout << "#Enter name of if statement, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#Enter a value. Add quotes if it's a string. ";
 std::getline(std::cin,te);
 std::cout << "#Enter s to make the next line a string with print function. Enter for other. ";
 std::getline(std::cin,ts);
 std::cout << "#Enter the second line. ";
 std::getline(std::cin,t);
 std::cout << "\n" << f[0] << text << f[1] << te << f[2] << "\n";
 if(ts == "s"){
std::cout << f[3] << t << f[4] << "\n\n";
}else{
     std::cout << "    " << t <<  "\n\n"; 
           }
         }           
 }else if(sw ==  "e"){      
 std::string f [5] = {"elif ", " == ", ":","    print(\"", "\")"};
 std::string text;
 std::string te;
 std::string ts;
 std::string t;
 while (true){
 std::cout << "#Enter name of elif statement, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#Enter a value. Add quotes if it's a string. ";
 std::getline(std::cin,te);
 std::cout << "#Enter s to make the next line a string with print function. Enter for other. ";
 std::getline(std::cin,ts);
 std::cout << "#Enter the second line. ";
 std::getline(std::cin,t);
 std::cout << "\n" << f[0] << text << f[1] << te << f[2] << "\n";
 if(ts == "s"){
 std::cout << f[3] << t << f[4] << "\n\n";
}else{
     std::cout << "    " << t <<  "\n\n";
           }
      } 
}else if(sw == "v"){
    std::string f [4] = {" = ","\"","input(\""," \")"};
    std::string n;
    std::string vs;
    std::string v;

 while (true){
 std::cout << "#Enter a name for your variable, m for main.\n";
 std::cout << "#";
 std::getline(std::cin,n);
 if(n == "m"){
 break;}
 std::cout << "#If the value is a string enter s. Enter  i for user input otherwise enter.\n";
 std::cout << "#";
 std::getline(std::cin,vs);
 std::cout << "#Enter a value. ";
 std::getline(std::cin,v);
 if(vs == "s"){
 std::cout << "\n" << n << f[0] << f[1] << v << f[1] << "\n\n";
}else if(vs == "i"){
 std::cout << "\n" << n << f[0] << f[2] << v << f[3] << "\n\n";                                                   
}else{
     std::cout << "\n" << n << f[0] << v << "\n\n";
           }
     }  
}else if(sw == "cy"){
std::string cpy;
 while (true){
 std::cout << "\nwhile True:\n";
 std::cout << "\nbreak\n";
 std::cout << "\ncontinue\n\n";
 std::cout << "\nelse:\n\n";
 std::cout << "#Enter m for main.\n";
 std::getline(std::cin,cpy);
 if(cpy == "m"){
 break;}
 } 
}else if(sw == "ch"){
 choice();
}else if(sw == "x"){
 break;
}else{
      std::cout << "Enter a letter in choices.\n";
        }
    }
return 0;
}





