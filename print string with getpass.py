#Copyright 2022 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0


eng = {
    "a": "print",
    "b": "('",
    "c": "')",
    "d": '("',
    "e": '")',
    "f": "('''",
    "g": "''')"
}
while True:
    print("#Enter a for one b for two c for three quotes. Enter x to exit.")
    print("#Enter ga, gb, gc to hide comments between strings.")
    print("#Enter m to go to main menu to select another choice.")
    switch = input("#")
    if switch == "a":
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["b"] + text + eng["c"])
    elif switch == "b":
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["d"] + text + eng["e"])
    elif switch == "c":
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["f"] + text + eng["g"])
    elif switch == "ga":
        import getpass
        print("#Enter text.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] +  eng["b"]  +  text +  eng["c"])
    elif switch == "gb":
        import getpass
        print("#Enter text.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] + eng["d"] + text + eng["e"])
    elif switch == "gc":
        import getpass
        print("#Enter text.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] + eng["f"] + text + eng["g"])
    elif switch == "x":
        break
            
            
        
        
    
 
    
        
     
   
    
   
        
  
        
    

            
       
