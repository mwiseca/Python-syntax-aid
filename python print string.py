eng = {
    "a": "print",
    "b": '("',
    "c": '")'
}
print("#Enter text. Enter x to exit.")
while True:    
    text = input("#")
    if text == "x":
        break
    print(eng["a"] +  eng["b"]  + text + eng["c"])
    
    