def main():
    camel = input("camelCamel: ")
    snake = seperate(camel)
    print(f"snake_case: {snake}")


def seperate(s):
    d = ""
    for c in s:
        if c.isupper():
            c = c.replace(c, f"_{c.lower()}")
            d += c
        else:
            d += c
    return d


main()