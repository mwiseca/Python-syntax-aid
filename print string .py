while True:
    print("#Enter a for one b for two c for three quotes. Enter x to exit.")
    print("#Enter m to go to main menu to select another choice.") 
    switch = input("#")
    if switch == "a":
        eng = {
    "a": "print",
    "b": "('",
    "c": "')"
}
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["b"] + text + eng["c"])
    elif switch == "b":
        eng = {
    "a": "print",
    "b": '("',
    "c": '")'
}
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["b"] + text + eng["c"])
    elif switch == "c":
        eng = {
    "a": "print",
    "b": "('''",
    "c": "''')"
}
        print("#Enter text.")
        while True:
            text = input("#")
            if text == "m":
                break
            print(eng["a"] + eng["b"] + text + eng["c"])
    elif switch == "x":
        break


            
            
            


        

