#Copyright 2022 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0


eng = {
    "a": "print",
    "b": "('",
    "c": "')",
    "d": '("',
    "e": '")',
    "f": "('''",
    "g": "''')",
    "h": "class ",
    "i": ":",
    "j": "    def __init__(self," ,
    "k": "):",
    "l": "self.",
    "m": "=",
    "n": " ",
    "o": "        "
}
while True:
    print("#Enter a for one b for two c for three quotes. Enter x to exit.")
    print("#Enter ga, gb, gc to hide comments between strings.")
    print("#Enter cl for classes.")
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
    elif switch == "cl":
        while True:
            print("#Enter a class")
            text = input("#")
            if text == "m":
                break
            te = input("#List attributes.")
            if te == "m":
                break
            print("#Assign values. One then press enter.")    
            v = input("#1")
            v1 = input("#2")
            v2 = input("#3")
            v3 = input("#4")
            v4 = input("#5")
            v5 = input("#6")
            v6 = input("#7")
            v7 = input("#8")
            print(eng["h"] + text + eng["i"] )
            print(eng["j"] + (te) + eng["k"])
            print(eng["o"] + eng["l"] +  v  +  eng["n"] + eng["m"] + eng["n"] + v )
            print(eng["o"] + eng["l"] +  v1  +  eng["n"] + eng["m"] + eng["n"] + v1)
            print(eng["o"] + eng["l"] +  v2  +  eng["n"] + eng["m"] + eng["n"] + v2)
            print(eng["o"] + eng["l"] +  v3  +  eng["n"] + eng["m"] + eng["n"] + v3)
            print(eng["o"] + eng["l"] +  v4  +  eng["n"] + eng["m"] + eng["n"] + v4)    
            print(eng["o"] + eng["l"] +  v5  +  eng["n"] + eng["m"] + eng["n"] + v5)
            print(eng["o"] + eng["l"] +  v6  +  eng["n"] + eng["m"] + eng["n"] + v6)
            print(eng["o"] + eng["l"] +  v7  +  eng["n"] + eng["m"] + eng["n"] + v7)
    elif switch == "x":
        break
        
     
     
            
            
            
            
            
    
            
            
            
        
        
            
            
        
        
    
     

    
        
     
   
    
   
        
  
        
    

            
       
