#Copyright 2022-2024 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0


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


def string_one_quote():
    c = ["print","('","')"] 
    print("#Enter text, m for main.")
    while True:
        try:
            text = input("#")
            if text == "m":
                break
            print("\n" + c[0] + c[1] + text + c[2] + "\n")
        except EOFError:
            print("Invalid input.")

def string_double_quote():
    c = ["print",'("','")']
    print("#Enter text, m for main.")
    while True:
        try:
            text = input("#")
            if text == "m":
                break
            print("\n" + c[0] + c[1] + text + c[2] + "\n")
        except EOFError:
            print("Invalid input.")
    

def string_triple_quote():
    c = ["print","('''","''')"]
    print("#Enter text, m for main.")
    while True:
        try:
            text = input("#")
            if text == "m":
                break
            print("\n" + c[0] + c[1] + text + c[2] + "\n")
        except EOFError:
            print("Invalid input.")

def hide_text_one():
    c = ["print","('","')",]
    import getpass
    print("#Enter text, m for main.")
    while True:
        try:
            text = getpass.getpass("")
            if text == "m":
                break
            print(c[0] +  c[1]  +  text +  c[2])
        except EOFError:
            print("Invalid input.")

def hide_text_double():
    c = ["print",'("','")']
    import getpass
    print("#Enter text, m for main.")
    while True:
        try:
            text = getpass.getpass("")
            if text == "m":
                break
            print(c[0] + c[1] + text + c[2])
        except EOFError:
            print("Invalid input.")


def hide_text_triple():
    c = ["print","('''","''')"]
    import getpass
    print("#Enter text, m for main.")
    while True:
        try:
            text = getpass.getpass("")
            if text == "m":
                break
            print(c[0] + c[1] + text + c[2])
        except EOFError:
            print("Invalid input.")

def classes():
    while True:
        try:
            c = ["class ",":","    def __init__(self," ,"):","        ","self."," ","="]
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
            print("\n" + c[0] + text + c[1] )
            print(c[2] + (te) + c[3])
            print(c[4] + c[5] +  v  +  c[6] + c[7] + c[6] + v )
            print(c[4] + c[5] +  v1  +  c[6] + c[7] + c[6] + v1)
            print(c[4] + c[5] +  v2  +  c[6] + c[7] + c[6] + v2)
            print(c[4] + c[5] +  v3  +  c[6] + c[7] + c[6] + v3)
            print(c[4] + c[5] +  v4  +  c[6] + c[7] + c[6] + v4)    
            print(c[4] + c[5] +  v5  +  c[6] + c[7] + c[6] + v5)
            print(c[4] + c[5] +  v6  +  c[6] + c[7] + c[6] + v6)
            print(c[4] + c[5] +  v7  +  c[6] + c[7] + c[6] + v7 + "\n")
        except EOFError:
            print("Invalid input.")
        

def if_statement():
    c = ["if "," == ",":","    ","print",'("','")','"']
    while True:
        try:
            print("#Enter name of if statement, m for main.")
            text = input("#")
            if text == "m":
                break
            te = input("#Enter a value.\n")
            quotes = input("Enter s if the value is a string.\n");
            ts = input("#Enter s to make the next line a string with print function. Enter for other. ")
            t = input("#Enter the second line. ")
            if quotes != "s":
                print("\n" + c[0] + text + c[1] + te + c[2])
            elif quotes == "s":
                print("\n" + c[0] + text + c[1] +c [7] + te +c[7] + c[2])
            if ts == "s":
                print(c[3] + c[4] + c[5] + t  + c[6])
                print(" ")
            else:
                print(c[3] + t + "\n")            
        except EOFError:
            print("Invalid input.")

def elif_statement():
    c = ["elif "," == ",":","    ","print",'("','")','"']
    while True: 
        try:
            print("#Enter name, m for main.")
            text = input("#")
            if text == "m":
                break
            te = input("#Enter a value.\n")
            quotes = input("Enter s if the value is a string.\n");
            ts = input("#Enter s make the next line a string with print function. Enter for other. ")
            t = input("#Enter the second line. ")
            if quotes != "s":
                print("\n" + c[0] + text + c[1] + te + c[2])
            elif quotes == "s":
                print("\n" + c[0] + text + c[1] +c [7] + te +c[7] + c[2])
            if ts == "s":
                print(c[3] + c[4] + c[5] + t  + c[6])
                print(" ")
            else:
                print(c[3] + t + "\n")
        except EOFError:
            print("Invalid input.")


def variable():
    c = [" = ",'"','input("'," ",'")']
    while True:
        try:
            print("#Enter a name for your variable, m for main.")
            n = input("#")
            if n == "m":
                break
            print("#If the value is a string enter s. Enter  i for user input otherwise enter. ")
            vs = input("#")
            v = input("#Enter a value or user prompt if i is selected. ")
            if vs == "s":
                print("\n" + n + c[0] + c[1] + v + c[1] + "\n")
            elif vs == "i":
                print("\n" + n + c[0] + c[2] + v + c[3] + c[4] + "\n")
            else:
                print("\n" + n +  c[0] + v + "\n")
        except EOFError:
            print("Invalid input.")


def copy():
    while True:
        print("\nwhile True:\n")
        print("\nbreak\n")
        print("\ncontinue\n")
        print("\nelse:\n")
        print("#Enter m for main.")
        cpy = input("//")
        if cpy == "m":
            break


functions = {
        "ch": ch,
        "a": string_one_quote,
        "b": string_double_quote,
        "c": string_triple_quote,
        "ga": hide_text_one,
        "gb": hide_text_double,
        "gc": hide_text_triple,
        "cl": classes,
        "i": if_statement,
        "e": elif_statement,
        "v": variable,
        "cy": copy
}


ch()
while True:
    try:
        print("#Enter m for main ch for choices x to exit.")
        switch = input("#")
        if switch == "x":
            break
        (functions[switch]())
    except KeyError:
        print("#Enter a selection from choices.\n")
    except EOFError:
        print("Invalid input.")




























