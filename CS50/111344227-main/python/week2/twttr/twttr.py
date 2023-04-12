s = input("Input: ")

x = ""
for c in s:
    if c in ["a","e","i","o","u","A","E","I","O","U"]:
        x = x
    else:
        x += c
print(f"Output: {x}")