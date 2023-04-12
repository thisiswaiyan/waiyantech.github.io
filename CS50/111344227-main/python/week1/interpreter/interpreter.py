def main():
    s = input("Type your problem: ").split()
    x, y, z = s
    x = int(x)
    z = int(z)
    if y == "+":
        c = add(x, z)
        print(f"After adding {c}")
    elif y == "-":
        c = subtract(x, z)
        print(f"{c:.1f}")
    elif y == "*":
        c = multiple(x, z)
        print(f"{c:.1f}")
    else:
        c = divide(x, z)
        print(f"{c:.1f}")


def add(a, b):
    return float(a + b)


def subtract(a, b):
    return float(a - b)


def multiple(a, b):
    return float(a * b)


def divide(a, b):
    return float(a / b)


main()