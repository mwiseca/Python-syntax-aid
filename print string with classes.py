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
    "k": "):"
    "l": "self.",
     "m": "=",
     "n": " ",
     "o": "        ",
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
            te = input("#")
            if te == "m":
                break
            print(eng["h"] + text + eng["i"] )
            print(eng["j"] + (te) + eng["k"])
            
            
            
            
            
    elif switch == "x":
        break
            
            
            
        
        
            
            
        
        
    
     

    
        
     
   
    
   
        
  
        
    

            
       
