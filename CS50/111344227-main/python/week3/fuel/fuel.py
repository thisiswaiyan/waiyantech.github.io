def main():
    x = fraction()
    while x > 100:
        x = fraction()
    if 95 <= x <= 100:
        print("F")
    elif 5 >= x >= 0:
        print("E")
    else:
        print(f"{x}%")


def fraction():
    while True:
        try:
            fuel = input("Fraction: ")
            fuel = fuel.split("/")
            a, b = fuel
            a = int(a)
            b = int(b)
            z = (a / b) * 100
            return round(z)
        except ValueError:
            fuel = input("Fraction: ")
        except ZeroDivisionError:
            fuel = input("Fraction: ")
        except AttributeError:
            fuel = input("Fraction: ")


main()