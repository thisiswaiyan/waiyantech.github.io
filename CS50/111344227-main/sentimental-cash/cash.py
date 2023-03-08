# TODO

def main():
    cents = get_cents()
    cents = round(cents)
    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25
    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10
    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5
    pennies = calculate_pennies(cents)
    cents = cents - pennies * 1
    coins = quarters + dimes + nickels + pennies
    print(f"{coins}")


def get_cents():
    while True:
        try:
            n = float(input("Changed Owed: "))
            if n > 0:
                return n * 100
        except ValueError:
            print("Not an integer.")


def calculate_quarters(cents):
    n = 0
    while cents >= 25:
        cents = cents - 25
        n += 1
    return n


def calculate_dimes(cents):
    n = 0
    while cents >= 10:
        cents = cents - 10
        n += 1
    return n


def calculate_nickels(cents):
    n = 0
    while cents >= 5:
        cents = cents - 5
        n += 1
    return n


def calculate_pennies(cents):
    n = 0
    while cents >= 1:
        cents = cents - 1
        n += 1
    return n


main()