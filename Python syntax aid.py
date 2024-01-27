#Copyright 2022-2024 Mitchell E Wise
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
    "o": "        ",
    "p": "if ", 
    "q": " == ",
    "r": ":",
    "s": "    ",
    "t": "elif ",
    "u": " = ",
    "v": '"',
    "w": 'input("',
    "x": " "
}
def ch():
    print("#For strings enter a for one b for two c for three quotes.  Enter x to exit.")
    print("#Enter ga, gb, gc to hide comments between strings while using in the terminal.")
    print("#Enter cl for classes.")
    print("#Enter i for if statement with equality operator e for elif.")
    print("#Quotes must be used for values on if elif statements if it's a string.")
    print("#Enter v for variables and with input function.")
    print("#Enter ch for choices.")
    print("#Enter cy for what's needed to copy and paste to finish a simple program.")
    print("#Enter m to go to main menu to select another choice.")
    

ch()
while True:
    print("#Enter m for main ch for choices x to exit.")
    switch = input("#")
    if switch == "a":
        print("#Enter text, m for main.")
        while True:
            text = input("#")
            if text == "m":
                break
            print("\n" + eng["a"] + eng["b"] + text + eng["c"] + "\n")
    elif switch == "b":
        print("#Enter text, m for main.")
        while True:
            text = input("#")
            if text == "m":
                break
            print("\n" + eng["a"] + eng["d"] + text + eng["e"] + "\n")
    elif switch == "c":
        print("#Enter text, m for main.")
        while True:
            text = input("#")
            if text == "m":
                break
            print("\n" + eng["a"] + eng["f"] + text + eng["g"] + "\n")
    elif switch == "ga":
        import getpass
        print("#Enter text, m for main.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] +  eng["b"]  +  text +  eng["c"])
    elif switch == "gb":
        import getpass
        print("#Enter text, m for main.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] + eng["d"] + text + eng["e"])
    elif switch == "gc":
        import getpass
        print("#Enter text, m for main.")
        while True:
            text = getpass.getpass("")
            if text == "m":
                break
            print(eng["a"] + eng["f"] + text + eng["g"])
    elif switch == "cl":
        while True:    
            print("#Enter a class, m for main.")
            text = input("#")
            if text == "m":
                break
            print("#List attributes with a comma separating each one.")
            te = input("#")
            if te == "m":
                break
            print("#Assign values. One then press enter.")    
            v = input("#1")
            v1 = input("#2")
            v2 = input("#3")
            v3 = input("#4")
            v4 = input("#5")
            v5 = input("#6")
            v6 =input("#7")
            v7 = input("#8")
            print("\n" + eng["h"] + text + eng["i"] )
            print(eng["j"] + (te) + eng["k"])
            print(eng["o"] + eng["l"] +  v  +  eng["n"] + eng["m"] + eng["n"] + v )
            print(eng["o"] + eng["l"] +  v1  +  eng["n"] + eng["m"] + eng["n"] + v1)
            print(eng["o"] + eng["l"] +  v2  +  eng["n"] + eng["m"] + eng["n"] + v2)
            print(eng["o"] + eng["l"] +  v3  +  eng["n"] + eng["m"] + eng["n"] + v3)
            print(eng["o"] + eng["l"] +  v4  +  eng["n"] + eng["m"] + eng["n"] + v4)    
            print(eng["o"] + eng["l"] +  v5  +  eng["n"] + eng["m"] + eng["n"] + v5)
            print(eng["o"] + eng["l"] +  v6  +  eng["n"] + eng["m"] + eng["n"] + v6)
            print(eng["o"] + eng["l"] +  v7  +  eng["n"] + eng["m"] + eng["n"] + v7 + "\n")
    elif switch == "i":
        while True:    
            print("#Enter name of if statement, m for main.")
            text = input("#")
            if text == "m":
                break
            te = input("#Enter a value. Add quotes if it's a string. ")
            ts = input("#Enter s to make the next line a string with print function. Enter for other. ")
            t = input("#Enter the second line. ")
            print("\n" + eng["p"] + text + eng["q"] + te + eng["r"])
            if ts == "s":
                print(eng["s"] + eng["a"] + eng["d"] + t  + eng["e"])
                print(" ")
                break
            else:
                print(eng["s"] + t + "\n")
    elif switch == "e":
        while True:    
            print("#Enter name, m for main.")
            text = input("#")
            if text == "m":
                break
            te = input("#Enter a value. Add quotes if it's a string.")
            ts = input("#Enter s make the next line a string with print function. Enter for other. ")
            t = input("#Enter the second line. ")
            print("\n" + eng["t"] + text + eng["q"] +te + eng["r"])
            if ts == "s":
                print(eng["s"] + eng["a"] + eng["d"] + t  + eng["e"])
                print(" ")
                break
            else:
                print(eng["s"] + t + "\n")
    elif switch == "v":
        while True:
            print("#Enter a name for your variable, m for main.")
            n = input("#")
            if n == "m":
                break
            print("#If the value is a string enter s. Enter  i for user input otherwise enter. ")
            vs = input("#")
            v = input("#Enter a value. ")
            if vs == "s":
                print("\n" + n + eng["u"] + eng["v"] + v + eng["v"] + "\n")
            elif vs == "i":
                print("\n" + n + eng["u"] + eng["w"] + v +  eng["x"] + eng["e"] + "\n")
            else:
                print("\n" + n +  eng["u"] + v + "\n")
    elif switch == "cy":
        while True:
            print("\nwhile True:\n")
            print("\nbreak\n")
            print("\ncontinue\n")
            print("\nelse:\n")
            print("#Enter m for main.")
            cpy = input("//")
            if cpy == "m":
                break
    elif switch == "ch":
        ch()
    elif switch == "x":
        break    









    


        
        
      
    
                      
                
                
            
            
              
                
     
     

      
      
    
            
            
    
     
       
    
    
    
    
        
    
            
            
    
        

    
 
    
        
     
   
    
   
        
  
        
    

            
       
