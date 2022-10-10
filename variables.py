#Copyright 2022 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0
 
    
eng = {
    "a": " = ",
    "b": '"',
    "c": 'input("',
    "d": '")',
    "e": " "
}
while True:
    print("Enter a name for your variable.")
    n = input("#")
    if n == "x":
        break
    print("#If the value is a string hit s  i for user input otherwise enter. ")
    vs = input("#")
    v = input("#Enter a value. ")
    if vs == "s":
        print(n + eng["a"] + eng["b"] + v + eng["b"])
    elif vs == "i":
        print(n + eng["a"] + eng["c"] + v +  eng["e"] + eng["d"])
    else:
        print(n +  eng["a"] + v)











        

    
    
    
        
        
        
    
          
