s = input("Greeting: ").casefold()

if "hello" in s:
    print("$0")
elif "H" in s.capitalize():
    print("$20")
else:
    print("$100")