import getpass
eng = {
    "a": "print",
    "b": '("',
    "c": '")'
}
print("#Enter text. Enter x to exit.")
while True:
    text = getpass.getpass("")
    if text == "x":
        break
    print(eng["a"] +  eng["b"]  +  text +  eng["c"]) 
    
    
    