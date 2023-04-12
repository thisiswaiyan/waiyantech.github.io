def main():
    m = int(input("m: "))
    E = formula(m)
    print(E)


def formula(i):
    e = i * (300000000 ** 2)
    return e


main()